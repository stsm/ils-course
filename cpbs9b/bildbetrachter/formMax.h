#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Bildbetrachter {

	/// <summary>
	/// Zusammenfassung für formMax
	///
	/// Warnung: Wenn Sie den Namen dieser Klasse ändern, müssen Sie auch
	///          die Ressourcendateiname-Eigenschaft für das Tool zur Kompilierung verwalteter Ressourcen ändern,
	///          das allen RESX-Dateien zugewiesen ist, von denen diese Klasse abhängt.
	///          Anderenfalls können die Designer nicht korrekt mit den lokalisierten Ressourcen
	///          arbeiten, die diesem Formular zugewiesen sind.
	/// </summary>
	public ref class formMax : public System::Windows::Forms::Form
	{
	public:
		formMax(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

		Void BildLaden(String ^bildname)
		{
			picBoxFormMax ->Load(bildname);
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~formMax()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  picBoxFormMax;
	protected: 

	protected: 

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
			this->picBoxFormMax = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBoxFormMax))->BeginInit();
			this->SuspendLayout();
			// 
			// picBoxFormMax
			// 
			this->picBoxFormMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->picBoxFormMax->Location = System::Drawing::Point(0, 0);
			this->picBoxFormMax->Name = L"picBoxFormMax";
			this->picBoxFormMax->Size = System::Drawing::Size(292, 273);
			this->picBoxFormMax->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picBoxFormMax->TabIndex = 0;
			this->picBoxFormMax->TabStop = false;
			// 
			// formMax
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 273);
			this->Controls->Add(this->picBoxFormMax);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"formMax";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Große Darstellung";
			this->TopMost = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBoxFormMax))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
