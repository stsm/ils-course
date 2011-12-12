#pragma once


namespace cpbs8b_ea3 {

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
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

		Boolean fn_checkFormat(TextBox ^eingabe)
		{
			Boolean boolFehler = false;
			Single eingabe1;

			try {

				eingabe1 = Convert::ToSingle(eingabe->Text);

				if (cmbBox_Rechenoperationen ->SelectedIndex == 3 && eingabe ->Name == "txtBox_Zahl1" && eingabe1 == 0)  // division & erste eingabebox & wert = 0
				{
					MessageBox::Show("Die Eingabe der ersten Zahl hat den Wert 0!\n\naktueller Wert: " + eingabe ->Text,"Division durch 0 nicht möglich!");
					eingabe ->Select();
					boolFehler = true;
				}
			}
			catch (FormatException^)
			{

				MessageBox::Show("Bei der Konvertierung ist ein Fehler aufgetreten.\n\naktueller Wert: " + eingabe ->Text,"Bitte überprüfen Sie Ihre Eingabe!");
				eingabe ->Select();
				boolFehler = true;
			}

			return boolFehler;
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
	private: System::Windows::Forms::Button^  btn_Berechnen;
	protected: 
	private: System::Windows::Forms::Button^  btn_Beenden;
	private: System::Windows::Forms::Label^  lbl_Ergebnis;
	private: System::Windows::Forms::Label^  lbl_ErgebnisAnzeige;
	private: System::Windows::Forms::TextBox^  txtBox_Zahl1;
	private: System::Windows::Forms::TextBox^  txtBox_Zahl2;
	private: System::Windows::Forms::GroupBox^  grpBox_Rechnenoperation;
	private: System::Windows::Forms::ComboBox^  cmbBox_Rechenoperationen;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_Berechnen = (gcnew System::Windows::Forms::Button());
			this->btn_Beenden = (gcnew System::Windows::Forms::Button());
			this->lbl_Ergebnis = (gcnew System::Windows::Forms::Label());
			this->lbl_ErgebnisAnzeige = (gcnew System::Windows::Forms::Label());
			this->txtBox_Zahl1 = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Zahl2 = (gcnew System::Windows::Forms::TextBox());
			this->grpBox_Rechnenoperation = (gcnew System::Windows::Forms::GroupBox());
			this->cmbBox_Rechenoperationen = (gcnew System::Windows::Forms::ComboBox());
			this->grpBox_Rechnenoperation->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Berechnen
			// 
			this->btn_Berechnen->Location = System::Drawing::Point(15, 118);
			this->btn_Berechnen->Name = L"btn_Berechnen";
			this->btn_Berechnen->Size = System::Drawing::Size(75, 23);
			this->btn_Berechnen->TabIndex = 3;
			this->btn_Berechnen->Text = L"Berechnen";
			this->btn_Berechnen->UseVisualStyleBackColor = true;
			this->btn_Berechnen->Click += gcnew System::EventHandler(this, &Form1::btn_Berechnen_Click);
			// 
			// btn_Beenden
			// 
			this->btn_Beenden->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btn_Beenden->Location = System::Drawing::Point(220, 118);
			this->btn_Beenden->Name = L"btn_Beenden";
			this->btn_Beenden->Size = System::Drawing::Size(75, 23);
			this->btn_Beenden->TabIndex = 4;
			this->btn_Beenden->Text = L"Beenden";
			this->btn_Beenden->UseVisualStyleBackColor = true;
			this->btn_Beenden->Click += gcnew System::EventHandler(this, &Form1::btn_Beenden_Click);
			// 
			// lbl_Ergebnis
			// 
			this->lbl_Ergebnis->AutoSize = true;
			this->lbl_Ergebnis->Location = System::Drawing::Point(15, 86);
			this->lbl_Ergebnis->Name = L"lbl_Ergebnis";
			this->lbl_Ergebnis->Size = System::Drawing::Size(57, 13);
			this->lbl_Ergebnis->TabIndex = 2;
			this->lbl_Ergebnis->Text = L"Ergebnis : ";
			// 
			// lbl_ErgebnisAnzeige
			// 
			this->lbl_ErgebnisAnzeige->AutoSize = true;
			this->lbl_ErgebnisAnzeige->Location = System::Drawing::Point(74, 86);
			this->lbl_ErgebnisAnzeige->Name = L"lbl_ErgebnisAnzeige";
			this->lbl_ErgebnisAnzeige->Size = System::Drawing::Size(13, 13);
			this->lbl_ErgebnisAnzeige->TabIndex = 3;
			this->lbl_ErgebnisAnzeige->Text = L"0";
			// 
			// txtBox_Zahl1
			// 
			this->txtBox_Zahl1->Location = System::Drawing::Point(18, 21);
			this->txtBox_Zahl1->Name = L"txtBox_Zahl1";
			this->txtBox_Zahl1->Size = System::Drawing::Size(100, 20);
			this->txtBox_Zahl1->TabIndex = 0;
			this->txtBox_Zahl1->Text = L"0";
			// 
			// txtBox_Zahl2
			// 
			this->txtBox_Zahl2->Location = System::Drawing::Point(18, 48);
			this->txtBox_Zahl2->Name = L"txtBox_Zahl2";
			this->txtBox_Zahl2->Size = System::Drawing::Size(100, 20);
			this->txtBox_Zahl2->TabIndex = 1;
			this->txtBox_Zahl2->Text = L"0";
			// 
			// grpBox_Rechnenoperation
			// 
			this->grpBox_Rechnenoperation->Controls->Add(this->cmbBox_Rechenoperationen);
			this->grpBox_Rechnenoperation->Location = System::Drawing::Point(144, 12);
			this->grpBox_Rechnenoperation->Name = L"grpBox_Rechnenoperation";
			this->grpBox_Rechnenoperation->Size = System::Drawing::Size(151, 56);
			this->grpBox_Rechnenoperation->TabIndex = 2;
			this->grpBox_Rechnenoperation->TabStop = false;
			this->grpBox_Rechnenoperation->Text = L"Rechenoperation";
			// 
			// cmbBox_Rechenoperationen
			// 
			this->cmbBox_Rechenoperationen->FormattingEnabled = true;
			this->cmbBox_Rechenoperationen->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Addition", L"Subtraktion", L"Multiplikation", 
				L"Division"});
			this->cmbBox_Rechenoperationen->Location = System::Drawing::Point(7, 20);
			this->cmbBox_Rechenoperationen->Name = L"cmbBox_Rechenoperationen";
			this->cmbBox_Rechenoperationen->Size = System::Drawing::Size(121, 21);
			this->cmbBox_Rechenoperationen->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btn_Beenden;
			this->ClientSize = System::Drawing::Size(335, 159);
			this->Controls->Add(this->grpBox_Rechnenoperation);
			this->Controls->Add(this->txtBox_Zahl2);
			this->Controls->Add(this->txtBox_Zahl1);
			this->Controls->Add(this->lbl_ErgebnisAnzeige);
			this->Controls->Add(this->lbl_Ergebnis);
			this->Controls->Add(this->btn_Beenden);
			this->Controls->Add(this->btn_Berechnen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Einfacher Taschenrechner";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpBox_Rechnenoperation->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 cmbBox_Rechenoperationen->SelectedIndex = 0;
			 }

	private: System::Void btn_Beenden_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private: System::Void btn_Berechnen_Click(System::Object^  sender, System::EventArgs^  e) {

				 Single sinErgebnis, sinZahl1, sinZahl2 = 0;

				 if (fn_checkFormat(txtBox_Zahl1) == false && fn_checkFormat(txtBox_Zahl2) == false)
				 {
					 sinZahl1 = Convert::ToSingle(txtBox_Zahl1 ->Text);
					 sinZahl2 = Convert::ToSingle(txtBox_Zahl2 ->Text); 

					 switch (cmbBox_Rechenoperationen->SelectedIndex)
					 {
					 case 0: // Addition
						 sinErgebnis = sinZahl1 + sinZahl2;
						 break;
					 case 1: // Subtraktion
						 sinErgebnis = sinZahl1 - sinZahl2;
						 break;
					 case 2: // Multiplikation
						 sinErgebnis = sinZahl1 * sinZahl2;
						 break;
					 case 3: // Division
						 sinErgebnis = sinZahl1 / sinZahl2;
						 break;
					 default:
						 MessageBox::Show("Da ist leider etwas ganz falsch gelaufen.","Oops!");
					 }
					 lbl_ErgebnisAnzeige ->Text = Convert::ToString(sinErgebnis);
				 }
			 }
	};
}

