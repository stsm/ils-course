#pragma once


namespace memory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	///
	/// Warnung: Wenn Sie den Namen dieser Klasse ändern, müssen Sie auch
	///          die Ressourcendateiname-Eigenschaft für das Tool zur Kompilierung verwalteter Ressourcen ändern,
	///          das allen RESX-Dateien zugewiesen ist, von denen diese Klasse abhängt.
	///          Anderenfalls können die Designer nicht korrekt mit den lokalisierten Ressourcen
	///          arbeiten, die diesem Formular zugewiesen sind.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
			// umgedrehte Karten + Spieler
			Int32 intOffeneKarten;
			Int32 intSpieler;
		
			// diverse Arrays für die Spielfeldverwaltung
			array <Point> ^arrOffeneKartenPos;
			array <Int32> ^arrPaare;
			array <Int32, 2> ^arrInitSpielfeld;
			array <Int32, 2> ^arrSpielfeld;
			array <Int32, 2> ^arrCheat;
			array <Point, 2> ^arrAufgedeckt;
	public:
		Void fn_karteOeffnen(Int32 x, Int32 y)
			{
				Int32 intAufTemp = 0;

				arrSpielfeld[x, y] = arrInitSpielfeld[x, y];
				arrOffeneKartenPos[intOffeneKarten] = Point(x, y);

				if (arrAufgedeckt[arrSpielfeld[x, y], 0].X != -1 && (arrAufgedeckt[arrSpielfeld[x, y], 0] != Point(x, y)))
				{
					intAufTemp = 1;
				}
				arrAufgedeckt[arrSpielfeld[x, y], intAufTemp] = Point(x, y);
				intOffeneKarten++;
			}

		Void fn_karteSchliessen()
		{
			Boolean boolTreffer = false;
			
			if (arrInitSpielfeld[arrOffeneKartenPos[0].X, arrOffeneKartenPos[0].Y] == arrInitSpielfeld[arrOffeneKartenPos[1].X, arrOffeneKartenPos[1].Y])
			{
				arrSpielfeld[arrOffeneKartenPos[0].X, arrOffeneKartenPos[0].Y] = 21;
				arrSpielfeld[arrOffeneKartenPos[1].X, arrOffeneKartenPos[1].Y] = 21;

				for (Int32 schleife = 0; schleife < 2; schleife++)
				{
					arrAufgedeckt[arrInitSpielfeld[arrOffeneKartenPos[schleife].X, arrOffeneKartenPos[schleife].Y], schleife].X = -1;
				}
				arrPaare[intSpieler]++;
				boolTreffer = true;
			}
			// sonst Karte wieder umdrehen
			else
			{
				arrSpielfeld[arrOffeneKartenPos[0].X, arrOffeneKartenPos[0].Y] = 22;
				arrSpielfeld[arrOffeneKartenPos[1].X, arrOffeneKartenPos[1].Y] = 22;
			}
			
			intOffeneKarten = 0;
			
			// Ggf. nächsten Spieler ermitteln
			if ((arrPaare[0] + arrPaare[1]) != 21)
			{
				if ((intSpieler == 0 && boolTreffer == false) || (intSpieler == 1 && boolTreffer == true))
				{
					intSpieler = 1;
					fn_computerZug();
				}
				else
				{
					btnCheat ->Enabled = true;
				}
			}
			else
			// Spiel zu Ende, alle Karten aufgedeckt
			{
				if (arrPaare[0] > arrPaare[1])
				{
					lblGewinner ->Text = "Sie haben gewonnen! :)";
				}
				else
				{
					lblGewinner ->Text = "Sie haben leider verloren! :(";
				}
				lblGewinner ->Visible = true;
			}
		}

		Void fn_computerZug()
		{
			Int32 intX1, intY1, intX2, intY2;
			Boolean boolGefunden = false;
			Random ^rndZufallszahl = gcnew Random();

			//Mal gucken, ob was in "arrAufgedeckt" gefunden wurde
			for (Int32 schleife = 0; schleife < 21; schleife ++)
			{
				if (arrAufgedeckt[schleife, 0].X != -1 && arrAufgedeckt[schleife, 1].X != -1)
				{
					intX1 = arrAufgedeckt[schleife, 0].X;
					intY1 = arrAufgedeckt[schleife, 0].Y;
					intX2 = arrAufgedeckt[schleife, 1].X;
					intY2 = arrAufgedeckt[schleife, 1].Y;
					boolGefunden = true;
				}
			}
			if (boolGefunden == true)
			{
				fn_karteOeffnen(intX2, intY2);
			}
			else
			{
				do
				{
					intX1 = rndZufallszahl ->Next(7);
					intY1 = rndZufallszahl ->Next(6);
				}while (arrSpielfeld[intX1, intY1] != 22);
				
				if (arrAufgedeckt[arrInitSpielfeld[intX1, intY1], 0].X != -1 && (arrAufgedeckt[arrInitSpielfeld[intX1, intY1], 0] != Point(intX1, intY1)))
				{
					fn_karteOeffnen(arrAufgedeckt[arrInitSpielfeld[intX1, intY1], 0].X, arrAufgedeckt[arrInitSpielfeld[intX1, intY1], 0].Y);
				}
				else
				{
					do
					{
						intX2 = rndZufallszahl ->Next(7);
						intY2 = rndZufallszahl ->Next(6);
					}while(arrSpielfeld[intX2, intY2] != 22 || (intX1 == intX2 && intY1 == intY2));
					
					fn_karteOeffnen(intX2, intY2);
				}
			}
			fn_karteOeffnen(intX1, intY1);
			tableLayoutPanel1 ->Refresh();
			timer1 ->Enabled = true;
		}

		Void fn_cheatAn()
		/*
			- arrCheat mit Daten füllen und abfragen, welche Paare noch nicht aufgedeckt wurden 
			- arrSpielfeld ggf. mit den aufzudeckenden Bild-Indizes belegen
		*/
		{
			for (Int32 schleife1 = 0; schleife1 < 7; schleife1++)
			{
				for (Int32 schleife2 = 0; schleife2 < 6; schleife2++)
				{
					arrCheat[schleife1, schleife2] = arrSpielfeld[schleife1, schleife2];
					if (arrSpielfeld[schleife1, schleife2] != 21)
					{
						arrSpielfeld[schleife1, schleife2] = arrInitSpielfeld[schleife1, schleife2];
					}
				}
			}
		}

		Void fn_cheatAus()
		// arrSpielfeld wiederherstellen
		{
			for (Int32 schleife1 = 0; schleife1 < 7; schleife1++)
			{
				for (Int32 schleife2 = 0; schleife2 < 6; schleife2++)
				{
					arrSpielfeld[schleife1, schleife2] = arrCheat[schleife1, schleife2];
				}
			}
		}
		
	public:
		Form1(void)
		{
			InitializeComponent();
			// Hilfsvariablen
			Int32 intBild = 0;
			array <Int32> ^arrFeld = gcnew array <Int32>(42);
			Random ^rndZufallszahl;

			//Arrays anlegen
			arrOffeneKartenPos = gcnew array <Point>(2);
			arrPaare = gcnew array <Int32>(2);
			arrInitSpielfeld = gcnew array <Int32, 2>(7, 6);
			arrSpielfeld = gcnew array <Int32, 2>(7, 6);
			arrCheat = gcnew array <Int32, 2>(7, 6);
			arrAufgedeckt = gcnew array <Point, 2>(21, 2);
			
			//Initialisierung
			intSpieler = 0;
			arrPaare[0] = 0;
			arrPaare[1] = 0;

			for (Int32 schleife1 = 0; schleife1 < 21; schleife1 ++)
			{
				for (Int32 schleife2 = 0; schleife2 < 2; schleife2++)
				{
					arrAufgedeckt[schleife1, schleife2].X = -1;
					arrAufgedeckt[schleife1, schleife2].Y = -1;
				}
			}
			
			for (Int32 schleife = 0; schleife < 42; schleife++)
			{
				arrFeld[schleife] = intBild;
				if (((schleife + 1) % 2) ==0)
				{
					intBild++;
				}
			}

			//Mischen
			rndZufallszahl = gcnew Random;
			for (Int32 schleife = 0; schleife < 42; schleife++)
			{
				Int32 intTemp1, intTemp2;
				intTemp1 = rndZufallszahl ->Next(42);
				intTemp2 = arrFeld[intTemp1];
				arrFeld[intTemp1] = arrFeld[schleife];
				arrFeld[schleife] = intTemp2;
			}

			for (Int32 schleife1 = 0; schleife1 < 7; schleife1++)
			{
				for (Int32 schleife2 = 0; schleife2 < 6; schleife2++)
				{
					arrInitSpielfeld[schleife1,schleife2] = arrFeld[schleife2 * 7 + schleife1];
					arrSpielfeld[schleife1, schleife2] = 22;
				}
			}
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

protected: 
	private: System::Windows::Forms::Button^  btnCheat;
	private: System::Windows::Forms::Timer^  timerCheat;
	private: System::Windows::Forms::Label^  lblGewinner;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  lblMensch;
	private: System::Windows::Forms::Label^  lblComputer;
	private: System::Windows::Forms::Label^  lblMenschPunkte;
	private: System::Windows::Forms::Label^  lblComputerPunkte;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblMensch = (gcnew System::Windows::Forms::Label());
			this->lblComputer = (gcnew System::Windows::Forms::Label());
			this->lblMenschPunkte = (gcnew System::Windows::Forms::Label());
			this->lblComputerPunkte = (gcnew System::Windows::Forms::Label());
			this->timerCheat = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblGewinner = (gcnew System::Windows::Forms::Label());
			this->btnCheat = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				64)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				64)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				64)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				64)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				64)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				64)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				64)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(448, 384);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->CellPaint += gcnew System::Windows::Forms::TableLayoutCellPaintEventHandler(this, &Form1::tableLayoutPanel1_CellPaint);
			this->tableLayoutPanel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::tableLayoutPanel1_MouseClick);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"any_dvd.png");
			this->imageList1->Images->SetKeyName(1, L"azureus.png");
			this->imageList1->Images->SetKeyName(2, L"compress.png");
			this->imageList1->Images->SetKeyName(3, L"counterstrike.png");
			this->imageList1->Images->SetKeyName(4, L"dev_c.png");
			this->imageList1->Images->SetKeyName(5, L"emule.png");
			this->imageList1->Images->SetKeyName(6, L"evernote.png");
			this->imageList1->Images->SetKeyName(7, L"gamecontroller.png");
			this->imageList1->Images->SetKeyName(8, L"gimp.png");
			this->imageList1->Images->SetKeyName(9, L"internet_explorer_alt.png");
			this->imageList1->Images->SetKeyName(10, L"lan.png");
			this->imageList1->Images->SetKeyName(11, L"nero.png");
			this->imageList1->Images->SetKeyName(12, L"quake_3.png");
			this->imageList1->Images->SetKeyName(13, L"rainmeter.png");
			this->imageList1->Images->SetKeyName(14, L"spybot.png");
			this->imageList1->Images->SetKeyName(15, L"the_witcher.png");
			this->imageList1->Images->SetKeyName(16, L"thunderbird.png");
			this->imageList1->Images->SetKeyName(17, L"usb.png");
			this->imageList1->Images->SetKeyName(18, L"vlc.png");
			this->imageList1->Images->SetKeyName(19, L"xfire.png");
			this->imageList1->Images->SetKeyName(20, L"xnview.png");
			this->imageList1->Images->SetKeyName(21, L"found.png");
			this->imageList1->Images->SetKeyName(22, L"not_found.png");
			// 
			// timer1
			// 
			this->timer1->Interval = 2000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// lblMensch
			// 
			this->lblMensch->AutoSize = true;
			this->lblMensch->Location = System::Drawing::Point(13, 391);
			this->lblMensch->Name = L"lblMensch";
			this->lblMensch->Size = System::Drawing::Size(45, 13);
			this->lblMensch->TabIndex = 1;
			this->lblMensch->Text = L"Mensch";
			// 
			// lblComputer
			// 
			this->lblComputer->AutoSize = true;
			this->lblComputer->Location = System::Drawing::Point(13, 409);
			this->lblComputer->Name = L"lblComputer";
			this->lblComputer->Size = System::Drawing::Size(52, 13);
			this->lblComputer->TabIndex = 2;
			this->lblComputer->Text = L"Computer";
			// 
			// lblMenschPunkte
			// 
			this->lblMenschPunkte->AutoSize = true;
			this->lblMenschPunkte->Location = System::Drawing::Point(82, 391);
			this->lblMenschPunkte->Name = L"lblMenschPunkte";
			this->lblMenschPunkte->Size = System::Drawing::Size(13, 13);
			this->lblMenschPunkte->TabIndex = 3;
			this->lblMenschPunkte->Text = L"0";
			// 
			// lblComputerPunkte
			// 
			this->lblComputerPunkte->AutoSize = true;
			this->lblComputerPunkte->Location = System::Drawing::Point(82, 409);
			this->lblComputerPunkte->Name = L"lblComputerPunkte";
			this->lblComputerPunkte->Size = System::Drawing::Size(13, 13);
			this->lblComputerPunkte->TabIndex = 4;
			this->lblComputerPunkte->Text = L"0";
			// 
			// timerCheat
			// 
			this->timerCheat->Interval = 3500;
			this->timerCheat->Tick += gcnew System::EventHandler(this, &Form1::timerCheat_Tick);
			// 
			// lblGewinner
			// 
			this->lblGewinner->AutoSize = true;
			this->lblGewinner->Location = System::Drawing::Point(128, 390);
			this->lblGewinner->Name = L"lblGewinner";
			this->lblGewinner->Size = System::Drawing::Size(62, 13);
			this->lblGewinner->TabIndex = 5;
			this->lblGewinner->Text = L"lblGewinner";
			// 
			// btnCheat
			// 
			this->btnCheat->Location = System::Drawing::Point(326, 404);
			this->btnCheat->Name = L"btnCheat";
			this->btnCheat->Size = System::Drawing::Size(109, 23);
			this->btnCheat->TabIndex = 6;
			this->btnCheat->Text = L"Alles aufdecken";
			this->btnCheat->UseVisualStyleBackColor = true;
			this->btnCheat->Click += gcnew System::EventHandler(this, &Form1::btnCheat_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 443);
			this->Controls->Add(this->btnCheat);
			this->Controls->Add(this->lblGewinner);
			this->Controls->Add(this->lblComputerPunkte);
			this->Controls->Add(this->lblMenschPunkte);
			this->Controls->Add(this->lblComputer);
			this->Controls->Add(this->lblMensch);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Memory";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 /* 
				Ich sehe gerne im Editor/Designer wo sich Objekte befinden, deswegen setze ich Eigenschaft "Visible" des Labels 
				"lblGewinner" nicht standardmäßig auf 'false', sondern verstecke das Label zur Laufzeit.
			 */
			 lblGewinner ->Visible = false;
		 }

private: System::Void tableLayoutPanel1_CellPaint(System::Object^  sender, System::Windows::Forms::TableLayoutCellPaintEventArgs^  e) {
				 imageList1 ->Draw(e ->Graphics, Point(e ->Column*64, e ->Row*64),arrSpielfeld[e ->Column, e ->Row]);				
			 }

private: System::Void tableLayoutPanel1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 Int32 intX = e ->X / 64;
			 Int32 intY = e ->Y / 64;
				
			 // Computer Zug beendet
			 if (intOffeneKarten == 0 && intSpieler == 1)
			 {
				 intSpieler = 0;
			 }
			 // Mensch zieht
			 if (intOffeneKarten == 0 && intSpieler == 0)
			 {
				 // Karte noch verdeckt?
				 if (arrSpielfeld[intX, intY] == 22)
				 {
					 fn_karteOeffnen(intX, intY);
				 }
			 }
			 // Eine Karte vom Menschen bereits umgedreht
			 else
			 {
				 if (intOffeneKarten == 1 && intSpieler == 0)
				 {
					 if (arrSpielfeld[intX, intY] == 22)
					 {
						 fn_karteOeffnen(intX, intY);
						 timer1 ->Enabled = true;
						 btnCheat ->Enabled = false;
					 }
				 }
			 }
			 tableLayoutPanel1 ->Refresh();
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer1 ->Enabled = false;
				 
			 fn_karteSchliessen();

			 lblMenschPunkte ->Text = Convert::ToString(arrPaare[0]);
			 lblComputerPunkte ->Text = Convert::ToString(arrPaare[1]);
			 tableLayoutPanel1 ->Refresh();
		 }

private: System::Void timerCheat_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timerCheat ->Enabled = false;	 
			 fn_cheatAus();
			 tableLayoutPanel1 ->Refresh();
			 btnCheat ->Enabled = true;
		 }

private: System::Void btnCheat_Click(System::Object^  sender, System::EventArgs^  e) {
			 btnCheat ->Enabled = false;
			 timerCheat ->Enabled = true;
			 fn_cheatAn();
			 tableLayoutPanel1 ->Refresh();
		 }
};
}

