#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace webbrowser {

	/// <summary>
	/// Zusammenfassung für urlOeffnenDialog
	///
	/// Warnung: Wenn Sie den Namen dieser Klasse ändern, müssen Sie auch
	///          die Ressourcendateiname-Eigenschaft für das Tool zur Kompilierung verwalteter Ressourcen ändern,
	///          das allen RESX-Dateien zugewiesen ist, von denen diese Klasse abhängt.
	///          Anderenfalls können die Designer nicht korrekt mit den lokalisierten Ressourcen
	///          arbeiten, die diesem Formular zugewiesen sind.
	/// </summary>
	public ref class urlOeffnenDialog : public System::Windows::Forms::Form
	{
	public:
		urlOeffnenDialog(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
		
		String^ liefereAdresse()
		{
			return txtBoxUrlOeffnen ->Text;
		}


	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~urlOeffnenDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblOeffnen;
	protected: 
	private: System::Windows::Forms::TextBox^  txtBoxUrlOeffnen;
	private: System::Windows::Forms::Button^  btnUrlOeffnen;

	private: System::Windows::Forms::Button^  btnUrlAbbrechen;


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
			this->lblOeffnen = (gcnew System::Windows::Forms::Label());
			this->txtBoxUrlOeffnen = (gcnew System::Windows::Forms::TextBox());
			this->btnUrlOeffnen = (gcnew System::Windows::Forms::Button());
			this->btnUrlAbbrechen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblOeffnen
			// 
			this->lblOeffnen->AutoSize = true;
			this->lblOeffnen->Location = System::Drawing::Point(13, 13);
			this->lblOeffnen->Name = L"lblOeffnen";
			this->lblOeffnen->Size = System::Drawing::Size(39, 13);
			this->lblOeffnen->TabIndex = 0;
			this->lblOeffnen->Text = L"Öffnen";
			// 
			// txtBoxUrlOeffnen
			// 
			this->txtBoxUrlOeffnen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxUrlOeffnen->Location = System::Drawing::Point(58, 11);
			this->txtBoxUrlOeffnen->Name = L"txtBoxUrlOeffnen";
			this->txtBoxUrlOeffnen->Size = System::Drawing::Size(227, 20);
			this->txtBoxUrlOeffnen->TabIndex = 0;
			this->txtBoxUrlOeffnen->TextChanged += gcnew System::EventHandler(this, &urlOeffnenDialog::txtBoxUrlOeffnen_TextChanged);
			// 
			// btnUrlOeffnen
			// 
			this->btnUrlOeffnen->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnUrlOeffnen->Enabled = false;
			this->btnUrlOeffnen->Location = System::Drawing::Point(58, 48);
			this->btnUrlOeffnen->Name = L"btnUrlOeffnen";
			this->btnUrlOeffnen->Size = System::Drawing::Size(75, 23);
			this->btnUrlOeffnen->TabIndex = 1;
			this->btnUrlOeffnen->Text = L"Öffnen";
			this->btnUrlOeffnen->UseVisualStyleBackColor = true;
			// 
			// btnUrlAbbrechen
			// 
			this->btnUrlAbbrechen->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnUrlAbbrechen->Location = System::Drawing::Point(210, 48);
			this->btnUrlAbbrechen->Name = L"btnUrlAbbrechen";
			this->btnUrlAbbrechen->Size = System::Drawing::Size(75, 23);
			this->btnUrlAbbrechen->TabIndex = 2;
			this->btnUrlAbbrechen->Text = L"Abbrechen";
			this->btnUrlAbbrechen->UseVisualStyleBackColor = true;
			this->btnUrlAbbrechen->Click += gcnew System::EventHandler(this, &urlOeffnenDialog::btnUrlAbbrechen_Click);
			// 
			// urlOeffnenDialog
			// 
			this->AcceptButton = this->btnUrlOeffnen;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnUrlAbbrechen;
			this->ClientSize = System::Drawing::Size(310, 86);
			this->ControlBox = false;
			this->Controls->Add(this->btnUrlAbbrechen);
			this->Controls->Add(this->btnUrlOeffnen);
			this->Controls->Add(this->txtBoxUrlOeffnen);
			this->Controls->Add(this->lblOeffnen);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"urlOeffnenDialog";
			this->Text = L"Öffnen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnUrlAbbrechen_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void txtBoxUrlOeffnen_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (txtBoxUrlOeffnen ->Text != String::Empty)
			 {
				 btnUrlOeffnen ->Enabled = true;
			 }
			 else
			 {
				 btnUrlOeffnen ->Enabled = false;
			 }
		 }
};
}
