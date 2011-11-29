#pragma once


namespace cpbs8b_ea4 {

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
	private: System::Windows::Forms::Button^  btn_Wandern;
	protected: 
	private: System::Windows::Forms::Button^  btn_Beenden;
	private: System::Windows::Forms::Label^  lbl_Wandern;

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
			this->btn_Wandern = (gcnew System::Windows::Forms::Button());
			this->btn_Beenden = (gcnew System::Windows::Forms::Button());
			this->lbl_Wandern = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_Wandern
			// 
			this->btn_Wandern->Location = System::Drawing::Point(12, 290);
			this->btn_Wandern->Name = L"btn_Wandern";
			this->btn_Wandern->Size = System::Drawing::Size(75, 23);
			this->btn_Wandern->TabIndex = 0;
			this->btn_Wandern->Text = L"Wandern";
			this->btn_Wandern->UseVisualStyleBackColor = true;
			this->btn_Wandern->Click += gcnew System::EventHandler(this, &Form1::btn_Wandern_Click);
			// 
			// btn_Beenden
			// 
			this->btn_Beenden->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btn_Beenden->Location = System::Drawing::Point(97, 290);
			this->btn_Beenden->Name = L"btn_Beenden";
			this->btn_Beenden->Size = System::Drawing::Size(75, 23);
			this->btn_Beenden->TabIndex = 1;
			this->btn_Beenden->Text = L"Beenden";
			this->btn_Beenden->UseVisualStyleBackColor = true;
			this->btn_Beenden->Click += gcnew System::EventHandler(this, &Form1::btn_Beenden_Click);
			// 
			// lbl_Wandern
			// 
			this->lbl_Wandern->AutoSize = true;
			this->lbl_Wandern->Location = System::Drawing::Point(41, 156);
			this->lbl_Wandern->Name = L"lbl_Wandern";
			this->lbl_Wandern->Size = System::Drawing::Size(102, 13);
			this->lbl_Wandern->TabIndex = 2;
			this->lbl_Wandern->Text = L"Hier steht ein Text...";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btn_Beenden;
			this->ClientSize = System::Drawing::Size(184, 325);
			this->Controls->Add(this->lbl_Wandern);
			this->Controls->Add(this->btn_Beenden);
			this->Controls->Add(this->btn_Wandern);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Wandern...";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 lbl_Wandern->Top = 0;
			 }
	private: System::Void btn_Beenden_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private: System::Void btn_Wandern_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (lbl_Wandern->Top < 200){
					 lbl_Wandern->Top = lbl_Wandern->Top + 10;
				 }
			 }
	};
}

