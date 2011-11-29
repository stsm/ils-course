#pragma once
#include "formMax.h"


namespace Bildbetrachter {

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
		formMax ^fensterBilderschau;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPageEinzel;
	private: System::Windows::Forms::TabPage^  tabPageSchau;
	private: System::Windows::Forms::Button^  btnAnzeigen;
	private: System::Windows::Forms::Button^  btnBeenden;
	private: System::Windows::Forms::Button^  btnOeffnen;
	private: System::Windows::Forms::CheckBox^  chkBoxNeuesFenster;
	private: System::Windows::Forms::CheckBox^  chkBoxOptimaleGroesse;
	private: System::Windows::Forms::TextBox^  txtBoxDatei;
	private: System::Windows::Forms::PictureBox^  picBoxEinzel;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::Button^  btnBeenden2;
	private: System::Windows::Forms::Button^  btnStarten;
	private: System::Windows::Forms::Button^  btnAuswaehlen;
	private: System::Windows::Forms::ListBox^  listBoxDatei;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::NumericUpDown^  numUpDown1;
	private: System::ComponentModel::IContainer^  components;



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageEinzel = (gcnew System::Windows::Forms::TabPage());
			this->picBoxEinzel = (gcnew System::Windows::Forms::PictureBox());
			this->txtBoxDatei = (gcnew System::Windows::Forms::TextBox());
			this->chkBoxNeuesFenster = (gcnew System::Windows::Forms::CheckBox());
			this->chkBoxOptimaleGroesse = (gcnew System::Windows::Forms::CheckBox());
			this->btnBeenden = (gcnew System::Windows::Forms::Button());
			this->btnOeffnen = (gcnew System::Windows::Forms::Button());
			this->btnAnzeigen = (gcnew System::Windows::Forms::Button());
			this->tabPageSchau = (gcnew System::Windows::Forms::TabPage());
			this->numUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBoxDatei = (gcnew System::Windows::Forms::ListBox());
			this->btnBeenden2 = (gcnew System::Windows::Forms::Button());
			this->btnStarten = (gcnew System::Windows::Forms::Button());
			this->btnAuswaehlen = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPageEinzel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBoxEinzel))->BeginInit();
			this->tabPageSchau->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPageEinzel);
			this->tabControl1->Controls->Add(this->tabPageSchau);
			this->tabControl1->Location = System::Drawing::Point(0, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(320, 303);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageEinzel
			// 
			this->tabPageEinzel->Controls->Add(this->picBoxEinzel);
			this->tabPageEinzel->Controls->Add(this->txtBoxDatei);
			this->tabPageEinzel->Controls->Add(this->chkBoxNeuesFenster);
			this->tabPageEinzel->Controls->Add(this->chkBoxOptimaleGroesse);
			this->tabPageEinzel->Controls->Add(this->btnBeenden);
			this->tabPageEinzel->Controls->Add(this->btnOeffnen);
			this->tabPageEinzel->Controls->Add(this->btnAnzeigen);
			this->tabPageEinzel->Location = System::Drawing::Point(4, 22);
			this->tabPageEinzel->Name = L"tabPageEinzel";
			this->tabPageEinzel->Padding = System::Windows::Forms::Padding(3);
			this->tabPageEinzel->Size = System::Drawing::Size(312, 277);
			this->tabPageEinzel->TabIndex = 0;
			this->tabPageEinzel->Text = L"Einzelbild";
			this->tabPageEinzel->UseVisualStyleBackColor = true;
			this->tabPageEinzel->Enter += gcnew System::EventHandler(this, &Form1::tabPageEinzel_Enter);
			// 
			// picBoxEinzel
			// 
			this->picBoxEinzel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->picBoxEinzel->Location = System::Drawing::Point(9, 0);
			this->picBoxEinzel->Name = L"picBoxEinzel";
			this->picBoxEinzel->Size = System::Drawing::Size(216, 220);
			this->picBoxEinzel->TabIndex = 6;
			this->picBoxEinzel->TabStop = false;
			// 
			// txtBoxDatei
			// 
			this->txtBoxDatei->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtBoxDatei->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxDatei->Location = System::Drawing::Point(9, 226);
			this->txtBoxDatei->Name = L"txtBoxDatei";
			this->txtBoxDatei->Size = System::Drawing::Size(295, 20);
			this->txtBoxDatei->TabIndex = 3;
			// 
			// chkBoxNeuesFenster
			// 
			this->chkBoxNeuesFenster->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->chkBoxNeuesFenster->AutoSize = true;
			this->chkBoxNeuesFenster->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chkBoxNeuesFenster->Location = System::Drawing::Point(133, 252);
			this->chkBoxNeuesFenster->Name = L"chkBoxNeuesFenster";
			this->chkBoxNeuesFenster->Size = System::Drawing::Size(92, 17);
			this->chkBoxNeuesFenster->TabIndex = 5;
			this->chkBoxNeuesFenster->Text = L"Neues Fenster";
			this->chkBoxNeuesFenster->UseVisualStyleBackColor = true;
			this->chkBoxNeuesFenster->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkBoxNeuesFenster_CheckedChanged);
			// 
			// chkBoxOptimaleGroesse
			// 
			this->chkBoxOptimaleGroesse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->chkBoxOptimaleGroesse->AutoSize = true;
			this->chkBoxOptimaleGroesse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chkBoxOptimaleGroesse->Location = System::Drawing::Point(9, 252);
			this->chkBoxOptimaleGroesse->Name = L"chkBoxOptimaleGroesse";
			this->chkBoxOptimaleGroesse->Size = System::Drawing::Size(96, 17);
			this->chkBoxOptimaleGroesse->TabIndex = 4;
			this->chkBoxOptimaleGroesse->Text = L"Optimale Größe";
			this->chkBoxOptimaleGroesse->UseVisualStyleBackColor = true;
			this->chkBoxOptimaleGroesse->CheckedChanged += gcnew System::EventHandler(this, &Form1::chkBoxOptimaleGroesse_CheckedChanged);
			// 
			// btnBeenden
			// 
			this->btnBeenden->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnBeenden->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnBeenden->Location = System::Drawing::Point(231, 64);
			this->btnBeenden->Name = L"btnBeenden";
			this->btnBeenden->Size = System::Drawing::Size(75, 23);
			this->btnBeenden->TabIndex = 2;
			this->btnBeenden->Text = L"Beenden";
			this->btnBeenden->UseVisualStyleBackColor = true;
			this->btnBeenden->Click += gcnew System::EventHandler(this, &Form1::btnBeenden_Click);
			// 
			// btnOeffnen
			// 
			this->btnOeffnen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnOeffnen->Location = System::Drawing::Point(231, 35);
			this->btnOeffnen->Name = L"btnOeffnen";
			this->btnOeffnen->Size = System::Drawing::Size(75, 23);
			this->btnOeffnen->TabIndex = 1;
			this->btnOeffnen->Text = L"Öffnen";
			this->btnOeffnen->UseVisualStyleBackColor = true;
			this->btnOeffnen->Click += gcnew System::EventHandler(this, &Form1::btnOeffnen_Click);
			// 
			// btnAnzeigen
			// 
			this->btnAnzeigen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnAnzeigen->Location = System::Drawing::Point(231, 6);
			this->btnAnzeigen->Name = L"btnAnzeigen";
			this->btnAnzeigen->Size = System::Drawing::Size(75, 23);
			this->btnAnzeigen->TabIndex = 0;
			this->btnAnzeigen->Text = L"Anzeigen";
			this->btnAnzeigen->UseVisualStyleBackColor = true;
			this->btnAnzeigen->Click += gcnew System::EventHandler(this, &Form1::btnAnzeigen_Click);
			// 
			// tabPageSchau
			// 
			this->tabPageSchau->Controls->Add(this->numUpDown1);
			this->tabPageSchau->Controls->Add(this->listBoxDatei);
			this->tabPageSchau->Controls->Add(this->btnBeenden2);
			this->tabPageSchau->Controls->Add(this->btnStarten);
			this->tabPageSchau->Controls->Add(this->btnAuswaehlen);
			this->tabPageSchau->Location = System::Drawing::Point(4, 22);
			this->tabPageSchau->Name = L"tabPageSchau";
			this->tabPageSchau->Padding = System::Windows::Forms::Padding(3);
			this->tabPageSchau->Size = System::Drawing::Size(312, 277);
			this->tabPageSchau->TabIndex = 1;
			this->tabPageSchau->Text = L"Bilderschau";
			this->tabPageSchau->UseVisualStyleBackColor = true;
			this->tabPageSchau->Enter += gcnew System::EventHandler(this, &Form1::tabPageSchau_Enter);
			// 
			// numUpDown1
			// 
			this->numUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numUpDown1->Location = System::Drawing::Point(229, 93);
			this->numUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->numUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numUpDown1->Name = L"numUpDown1";
			this->numUpDown1->Size = System::Drawing::Size(75, 20);
			this->numUpDown1->TabIndex = 3;
			this->numUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			// 
			// listBoxDatei
			// 
			this->listBoxDatei->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBoxDatei->FormattingEnabled = true;
			this->listBoxDatei->Location = System::Drawing::Point(7, 6);
			this->listBoxDatei->Name = L"listBoxDatei";
			this->listBoxDatei->Size = System::Drawing::Size(216, 160);
			this->listBoxDatei->TabIndex = 4;
			// 
			// btnBeenden2
			// 
			this->btnBeenden2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnBeenden2->Location = System::Drawing::Point(229, 64);
			this->btnBeenden2->Name = L"btnBeenden2";
			this->btnBeenden2->Size = System::Drawing::Size(75, 23);
			this->btnBeenden2->TabIndex = 2;
			this->btnBeenden2->Text = L"Beenden";
			this->btnBeenden2->UseVisualStyleBackColor = true;
			this->btnBeenden2->Click += gcnew System::EventHandler(this, &Form1::btnBeenden2_Click);
			// 
			// btnStarten
			// 
			this->btnStarten->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnStarten->Location = System::Drawing::Point(229, 35);
			this->btnStarten->Name = L"btnStarten";
			this->btnStarten->Size = System::Drawing::Size(75, 23);
			this->btnStarten->TabIndex = 1;
			this->btnStarten->Text = L"Starten";
			this->btnStarten->UseVisualStyleBackColor = true;
			this->btnStarten->Click += gcnew System::EventHandler(this, &Form1::btnStarten_Click);
			// 
			// btnAuswaehlen
			// 
			this->btnAuswaehlen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnAuswaehlen->Location = System::Drawing::Point(229, 6);
			this->btnAuswaehlen->Name = L"btnAuswaehlen";
			this->btnAuswaehlen->Size = System::Drawing::Size(75, 23);
			this->btnAuswaehlen->TabIndex = 0;
			this->btnAuswaehlen->Text = L"Auswählen";
			this->btnAuswaehlen->UseVisualStyleBackColor = true;
			this->btnAuswaehlen->Click += gcnew System::EventHandler(this, &Form1::btnAuswaehlen_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Bitmap |*.bmp |Graphics Interchange Format| *.gif |Windows Metafile|*.wmf|Grafik-" 
				L"Dateien |*.bmp; *.gif; *.jpg; *.png; *.tif; *.wmf";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->Filter = L"Bitmap |*.bmp |Graphics Interchange Format| *.gif |Windows Metafile|*.wmf|Grafik-" 
				L"Dateien |*.bmp; *.gif; *.jpg; *.png; *.tif; *.wmf";
			this->openFileDialog2->Multiselect = true;
			this->openFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog2_FileOk);
			// 
			// timer1
			// 
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnBeenden;
			this->ClientSize = System::Drawing::Size(320, 305);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bildbetrachter";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tabControl1->ResumeLayout(false);
			this->tabPageEinzel->ResumeLayout(false);
			this->tabPageEinzel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBoxEinzel))->EndInit();
			this->tabPageSchau->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnBeenden_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void btnBeenden2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }

private: System::Void tabPageEinzel_Enter(System::Object^ sender, System::EventArgs^ e){
			 AcceptButton = btnAnzeigen;
		 }

private: System::Void tabPageSchau_Enter(System::Object^ sender, System::EventArgs^ e){
			 AcceptButton = btnStarten;
		 }

private: System::Void btnOeffnen_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1 ->ShowDialog();
		 }

private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 txtBoxDatei ->Text = openFileDialog1 ->FileName;
			 btnAnzeigen_Click(sender, e);
		 }

private: System::Void btnAnzeigen_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (txtBoxDatei ->Text != String::Empty)
			 {
				 if (IO::File::Exists(txtBoxDatei ->Text))
				 {
					 picBoxEinzel ->Load(txtBoxDatei ->Text);

					 if (chkBoxNeuesFenster ->Checked)
					 {
						 formMax ^neuesFormular = gcnew formMax;
						 neuesFormular ->BildLaden(txtBoxDatei ->Text);
						 neuesFormular ->Text = String::Format("Große Darstellung - {0}",txtBoxDatei->Text);
						 neuesFormular ->ShowDialog();
					 }
				 }
				 else
				 {
					 MessageBox::Show("Datei Existiert nicht!","Fehler",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }
		 }
private: System::Void chkBoxOptimaleGroesse_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (chkBoxOptimaleGroesse ->Checked)
			 {
				 picBoxEinzel ->SizeMode = PictureBoxSizeMode::Zoom;
			 }
			 else
			 {
				 picBoxEinzel ->SizeMode = PictureBoxSizeMode::Normal;
			 }
		 }

private: System::Void chkBoxNeuesFenster_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (chkBoxNeuesFenster ->Checked)
			 {
				 btnAnzeigen_Click(sender, e);
			 }
		 }
private: System::Void btnAuswaehlen_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog2 ->ShowDialog();
		 }
private: System::Void openFileDialog2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 array <String^> ^dateien = openFileDialog2 ->FileNames;
			 if (listBoxDatei ->Items ->Count != 0)
			 {
				 listBoxDatei ->Items ->Clear();
			 }
			 for each (String ^datei in dateien)
			 {
				 listBoxDatei ->Items ->Add(datei);
			 }
		 }
private: System::Void btnStarten_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (listBoxDatei ->Items ->Count ==0)
			 {
				 MessageBox::Show("Sie müssen erst Dateien auswählen!","Fehler!",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 return;
			 }
			 else
			 {
				 if (listBoxDatei ->SelectedIndex == -1)
				 {
					 listBoxDatei ->SelectedIndex = 0;
				 }
				 timer1 ->Interval = Convert::ToInt16(numUpDown1 ->Value)*1000;
				 timer1 ->Start();
				 fensterBilderschau = gcnew formMax;
				 fensterBilderschau ->BildLaden(listBoxDatei ->SelectedItem ->ToString());
				 fensterBilderschau ->Text = String::Format("Bilderschau - Bild {0} von {1}  {2} ",listBoxDatei ->SelectedIndex+1,listBoxDatei ->Items ->Count, listBoxDatei ->SelectedItem ->ToString());
				 fensterBilderschau ->ControlBox=false;
				 fensterBilderschau ->Show();
			 }
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (listBoxDatei ->SelectedIndex < listBoxDatei ->Items ->Count-1)
			 {
				 listBoxDatei ->SelectedIndex++;
				 fensterBilderschau ->BildLaden(listBoxDatei ->SelectedItem ->ToString());
				 fensterBilderschau ->Text = String::Format("Bilderschau - Bild {0} von {1}  {2} ",listBoxDatei ->SelectedIndex+1,listBoxDatei ->Items ->Count, listBoxDatei ->SelectedItem ->ToString());
				 System::Media::SystemSounds::Asterisk ->Play();
			 }
			 else
			 {
				 timer1 ->Stop();
				 listBoxDatei ->SelectedIndex = -1;
				 fensterBilderschau ->Close();
			 }
		 }
};
}

