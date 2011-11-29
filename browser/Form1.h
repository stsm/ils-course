#pragma once

#include "urlOeffnenDialog.h"


namespace webbrowser {

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
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::ListBox^  listBoxVerlauf;
	private: System::Windows::Forms::WebBrowser^  webInhalt;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemDatei;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemBeenden;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemOeffnen;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemNavi;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemVor;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemRueck;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemNeuladen;


	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemLadenAbbr;
	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
	private: System::Windows::Forms::ToolStrip^  toolStripAdresse;
	private: System::Windows::Forms::ToolStrip^  toolStripNavigation;
	private: System::Windows::Forms::ToolStripButton^  ToolStripButtonRueck;
	private: System::Windows::Forms::ToolStripButton^  ToolStripButtonVor;
	private: System::Windows::Forms::ToolStripButton^  ToolStripButtonNeuladen;
	private: System::Windows::Forms::ToolStripButton^  ToolStripButtonLadenAbbr;




	private: System::Windows::Forms::ToolStripTextBox^  ToolStripTextBoxAdresse;
	private: System::Windows::Forms::ToolStripButton^  ToolStripButtonLos;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemAnsicht;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemAnsichtNavi;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemAnsichtSymbol;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemAnsichtSymbolAddr;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemAnsichtSymbolNavi;
	private: System::Windows::Forms::ToolStrip^  toolStripNavi;

	private: System::Windows::Forms::ToolStripLabel^  ToolStripLabelNavi;
	private: System::Windows::Forms::ToolStripButton^  ToolStripButtonSchliessen;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuVerlauf;
	private: System::Windows::Forms::ToolStripMenuItem^  ContextMenuVerlaufSort;
	private: System::Windows::Forms::ToolStripMenuItem^  ContextMenuVerlaufLoeschen;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemHilfe;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemHilfeInfo;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemAnsichtVollbild;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuSymbol;
	private: System::Windows::Forms::ToolStripMenuItem^  contextMenuSymbolAddr;


	private: System::Windows::Forms::ToolStripMenuItem^  contextMenuSymbolNavi;
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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBoxVerlauf = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuVerlauf = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ContextMenuVerlaufSort = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ContextMenuVerlaufLoeschen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripNavi = (gcnew System::Windows::Forms::ToolStrip());
			this->ToolStripLabelNavi = (gcnew System::Windows::Forms::ToolStripLabel());
			this->ToolStripButtonSchliessen = (gcnew System::Windows::Forms::ToolStripButton());
			this->webInhalt = (gcnew System::Windows::Forms::WebBrowser());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItemDatei = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemOeffnen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ToolStripMenuItemBeenden = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemNavi = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemVor = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemRueck = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemNeuladen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemLadenAbbr = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemAnsicht = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemAnsichtNavi = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemAnsichtSymbol = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemAnsichtSymbolAddr = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemAnsichtSymbolNavi = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemAnsichtVollbild = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemHilfe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemHilfeInfo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->toolStripAdresse = (gcnew System::Windows::Forms::ToolStrip());
			this->contextMenuSymbol = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuSymbolAddr = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuSymbolNavi = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripTextBoxAdresse = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->ToolStripButtonLos = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripNavigation = (gcnew System::Windows::Forms::ToolStrip());
			this->ToolStripButtonRueck = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButtonVor = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButtonNeuladen = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButtonLadenAbbr = (gcnew System::Windows::Forms::ToolStripButton());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->contextMenuVerlauf->SuspendLayout();
			this->toolStripNavi->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->toolStripAdresse->SuspendLayout();
			this->contextMenuSymbol->SuspendLayout();
			this->toolStripNavigation->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->listBoxVerlauf);
			this->splitContainer1->Panel1->Controls->Add(this->toolStripNavi);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->webInhalt);
			this->splitContainer1->Panel2->Controls->Add(this->statusStrip1);
			this->splitContainer1->Size = System::Drawing::Size(870, 441);
			this->splitContainer1->SplitterDistance = 131;
			this->splitContainer1->TabIndex = 0;
			// 
			// listBoxVerlauf
			// 
			this->listBoxVerlauf->ContextMenuStrip = this->contextMenuVerlauf;
			this->listBoxVerlauf->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBoxVerlauf->FormattingEnabled = true;
			this->listBoxVerlauf->Location = System::Drawing::Point(0, 25);
			this->listBoxVerlauf->Name = L"listBoxVerlauf";
			this->listBoxVerlauf->Size = System::Drawing::Size(131, 407);
			this->listBoxVerlauf->TabIndex = 0;
			this->listBoxVerlauf->Click += gcnew System::EventHandler(this, &Form1::listBoxVerlauf_Click);
			// 
			// contextMenuVerlauf
			// 
			this->contextMenuVerlauf->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ContextMenuVerlaufSort, 
				this->ContextMenuVerlaufLoeschen});
			this->contextMenuVerlauf->Name = L"contextMenuVerlauf";
			this->contextMenuVerlauf->Size = System::Drawing::Size(119, 48);
			// 
			// ContextMenuVerlaufSort
			// 
			this->ContextMenuVerlaufSort->CheckOnClick = true;
			this->ContextMenuVerlaufSort->Name = L"ContextMenuVerlaufSort";
			this->ContextMenuVerlaufSort->Size = System::Drawing::Size(118, 22);
			this->ContextMenuVerlaufSort->Text = L"&Sortieren";
			this->ContextMenuVerlaufSort->Click += gcnew System::EventHandler(this, &Form1::ContextMenuVerlaufSort_Click);
			// 
			// ContextMenuVerlaufLoeschen
			// 
			this->ContextMenuVerlaufLoeschen->Name = L"ContextMenuVerlaufLoeschen";
			this->ContextMenuVerlaufLoeschen->Size = System::Drawing::Size(118, 22);
			this->ContextMenuVerlaufLoeschen->Text = L"&Löschen";
			this->ContextMenuVerlaufLoeschen->Click += gcnew System::EventHandler(this, &Form1::ContextMenuVerlaufLoeschen_Click);
			// 
			// toolStripNavi
			// 
			this->toolStripNavi->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStripNavi->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ToolStripLabelNavi, 
				this->ToolStripButtonSchliessen});
			this->toolStripNavi->Location = System::Drawing::Point(0, 0);
			this->toolStripNavi->Name = L"toolStripNavi";
			this->toolStripNavi->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->toolStripNavi->Size = System::Drawing::Size(131, 25);
			this->toolStripNavi->TabIndex = 1;
			this->toolStripNavi->Text = L"toolStrip1";
			// 
			// ToolStripLabelNavi
			// 
			this->ToolStripLabelNavi->Name = L"ToolStripLabelNavi";
			this->ToolStripLabelNavi->Size = System::Drawing::Size(82, 22);
			this->ToolStripLabelNavi->Text = L"Navigationsliste";
			this->ToolStripLabelNavi->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ToolStripButtonSchliessen
			// 
			this->ToolStripButtonSchliessen->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->ToolStripButtonSchliessen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonSchliessen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripButtonSchliessen.Image")));
			this->ToolStripButtonSchliessen->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ToolStripButtonSchliessen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonSchliessen->Name = L"ToolStripButtonSchliessen";
			this->ToolStripButtonSchliessen->Size = System::Drawing::Size(23, 22);
			this->ToolStripButtonSchliessen->Text = L"Schließen";
			this->ToolStripButtonSchliessen->Click += gcnew System::EventHandler(this, &Form1::ToolStripButtonSchliessen_Click);
			// 
			// webInhalt
			// 
			this->webInhalt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webInhalt->IsWebBrowserContextMenuEnabled = false;
			this->webInhalt->Location = System::Drawing::Point(0, 0);
			this->webInhalt->MinimumSize = System::Drawing::Size(20, 20);
			this->webInhalt->Name = L"webInhalt";
			this->webInhalt->Size = System::Drawing::Size(735, 419);
			this->webInhalt->TabIndex = 0;
			this->webInhalt->Url = (gcnew System::Uri(L"http://www.ils.de", System::UriKind::Absolute));
			this->webInhalt->ProgressChanged += gcnew System::Windows::Forms::WebBrowserProgressChangedEventHandler(this, &Form1::webInhalt_ProgressChanged);
			this->webInhalt->Navigating += gcnew System::Windows::Forms::WebBrowserNavigatingEventHandler(this, &Form1::webInhalt_Navigating);
			this->webInhalt->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &Form1::webInhalt_DocumentCompleted);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripProgressBar1, 
				this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 419);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(735, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Visible = false;
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItemDatei, 
				this->ToolStripMenuItemNavi, this->ToolStripMenuItemAnsicht, this->ToolStripMenuItemHilfe});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(870, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItemDatei
			// 
			this->toolStripMenuItemDatei->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ToolStripMenuItemOeffnen, 
				this->toolStripSeparator1, this->ToolStripMenuItemBeenden});
			this->toolStripMenuItemDatei->Name = L"toolStripMenuItemDatei";
			this->toolStripMenuItemDatei->Size = System::Drawing::Size(44, 20);
			this->toolStripMenuItemDatei->Text = L"&Datei";
			// 
			// ToolStripMenuItemOeffnen
			// 
			this->ToolStripMenuItemOeffnen->Name = L"ToolStripMenuItemOeffnen";
			this->ToolStripMenuItemOeffnen->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::L));
			this->ToolStripMenuItemOeffnen->Size = System::Drawing::Size(148, 22);
			this->ToolStripMenuItemOeffnen->Text = L"Ö&ffnen";
			this->ToolStripMenuItemOeffnen->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemOeffnen_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(145, 6);
			// 
			// ToolStripMenuItemBeenden
			// 
			this->ToolStripMenuItemBeenden->Name = L"ToolStripMenuItemBeenden";
			this->ToolStripMenuItemBeenden->Size = System::Drawing::Size(148, 22);
			this->ToolStripMenuItemBeenden->Text = L"&Beenden";
			this->ToolStripMenuItemBeenden->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemBeenden_Click);
			// 
			// ToolStripMenuItemNavi
			// 
			this->ToolStripMenuItemNavi->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->ToolStripMenuItemVor, 
				this->ToolStripMenuItemRueck, this->ToolStripMenuItemNeuladen, this->ToolStripMenuItemLadenAbbr});
			this->ToolStripMenuItemNavi->Name = L"ToolStripMenuItemNavi";
			this->ToolStripMenuItemNavi->Size = System::Drawing::Size(70, 20);
			this->ToolStripMenuItemNavi->Text = L"N&avigation";
			// 
			// ToolStripMenuItemVor
			// 
			this->ToolStripMenuItemVor->Enabled = false;
			this->ToolStripMenuItemVor->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripMenuItemVor.Image")));
			this->ToolStripMenuItemVor->Name = L"ToolStripMenuItemVor";
			this->ToolStripMenuItemVor->Size = System::Drawing::Size(157, 22);
			this->ToolStripMenuItemVor->Text = L"&Vorwärts";
			this->ToolStripMenuItemVor->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemVor_Click);
			// 
			// ToolStripMenuItemRueck
			// 
			this->ToolStripMenuItemRueck->Enabled = false;
			this->ToolStripMenuItemRueck->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripMenuItemRueck.Image")));
			this->ToolStripMenuItemRueck->Name = L"ToolStripMenuItemRueck";
			this->ToolStripMenuItemRueck->Size = System::Drawing::Size(157, 22);
			this->ToolStripMenuItemRueck->Text = L"&Rückwärts";
			this->ToolStripMenuItemRueck->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemRueck_Click);
			// 
			// ToolStripMenuItemNeuladen
			// 
			this->ToolStripMenuItemNeuladen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripMenuItemNeuladen.Image")));
			this->ToolStripMenuItemNeuladen->Name = L"ToolStripMenuItemNeuladen";
			this->ToolStripMenuItemNeuladen->Size = System::Drawing::Size(157, 22);
			this->ToolStripMenuItemNeuladen->Text = L"&Neuladen";
			this->ToolStripMenuItemNeuladen->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemNeuladen_Click);
			// 
			// ToolStripMenuItemLadenAbbr
			// 
			this->ToolStripMenuItemLadenAbbr->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripMenuItemLadenAbbr.Image")));
			this->ToolStripMenuItemLadenAbbr->Name = L"ToolStripMenuItemLadenAbbr";
			this->ToolStripMenuItemLadenAbbr->Size = System::Drawing::Size(157, 22);
			this->ToolStripMenuItemLadenAbbr->Text = L"Laden &abbrechen";
			this->ToolStripMenuItemLadenAbbr->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemLadenAbbr_Click);
			// 
			// ToolStripMenuItemAnsicht
			// 
			this->ToolStripMenuItemAnsicht->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ToolStripMenuItemAnsichtNavi, 
				this->ToolStripMenuItemAnsichtSymbol, this->ToolStripMenuItemAnsichtVollbild});
			this->ToolStripMenuItemAnsicht->Name = L"ToolStripMenuItemAnsicht";
			this->ToolStripMenuItemAnsicht->Size = System::Drawing::Size(54, 20);
			this->ToolStripMenuItemAnsicht->Text = L"&Ansicht";
			// 
			// ToolStripMenuItemAnsichtNavi
			// 
			this->ToolStripMenuItemAnsichtNavi->Checked = true;
			this->ToolStripMenuItemAnsichtNavi->CheckOnClick = true;
			this->ToolStripMenuItemAnsichtNavi->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ToolStripMenuItemAnsichtNavi->Name = L"ToolStripMenuItemAnsichtNavi";
			this->ToolStripMenuItemAnsichtNavi->Size = System::Drawing::Size(152, 22);
			this->ToolStripMenuItemAnsichtNavi->Text = L"&Navigationsliste";
			this->ToolStripMenuItemAnsichtNavi->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemAnsichtNavi_Click);
			// 
			// ToolStripMenuItemAnsichtSymbol
			// 
			this->ToolStripMenuItemAnsichtSymbol->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ToolStripMenuItemAnsichtSymbolAddr, 
				this->ToolStripMenuItemAnsichtSymbolNavi});
			this->ToolStripMenuItemAnsichtSymbol->Name = L"ToolStripMenuItemAnsichtSymbol";
			this->ToolStripMenuItemAnsichtSymbol->Size = System::Drawing::Size(152, 22);
			this->ToolStripMenuItemAnsichtSymbol->Text = L"&Symbolleisten";
			// 
			// ToolStripMenuItemAnsichtSymbolAddr
			// 
			this->ToolStripMenuItemAnsichtSymbolAddr->Checked = true;
			this->ToolStripMenuItemAnsichtSymbolAddr->CheckOnClick = true;
			this->ToolStripMenuItemAnsichtSymbolAddr->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ToolStripMenuItemAnsichtSymbolAddr->Name = L"ToolStripMenuItemAnsichtSymbolAddr";
			this->ToolStripMenuItemAnsichtSymbolAddr->Size = System::Drawing::Size(125, 22);
			this->ToolStripMenuItemAnsichtSymbolAddr->Text = L"Ad&resse";
			this->ToolStripMenuItemAnsichtSymbolAddr->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemAnsichtSymbolAddr_Click);
			// 
			// ToolStripMenuItemAnsichtSymbolNavi
			// 
			this->ToolStripMenuItemAnsichtSymbolNavi->Checked = true;
			this->ToolStripMenuItemAnsichtSymbolNavi->CheckOnClick = true;
			this->ToolStripMenuItemAnsichtSymbolNavi->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ToolStripMenuItemAnsichtSymbolNavi->Name = L"ToolStripMenuItemAnsichtSymbolNavi";
			this->ToolStripMenuItemAnsichtSymbolNavi->Size = System::Drawing::Size(125, 22);
			this->ToolStripMenuItemAnsichtSymbolNavi->Text = L"Na&vigation";
			this->ToolStripMenuItemAnsichtSymbolNavi->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemAnsichtSymbolNavi_Click);
			// 
			// ToolStripMenuItemAnsichtVollbild
			// 
			this->ToolStripMenuItemAnsichtVollbild->CheckOnClick = true;
			this->ToolStripMenuItemAnsichtVollbild->Name = L"ToolStripMenuItemAnsichtVollbild";
			this->ToolStripMenuItemAnsichtVollbild->Size = System::Drawing::Size(152, 22);
			this->ToolStripMenuItemAnsichtVollbild->Text = L"&Vollbild";
			this->ToolStripMenuItemAnsichtVollbild->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemAnsichtVollbild_Click);
			// 
			// ToolStripMenuItemHilfe
			// 
			this->ToolStripMenuItemHilfe->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ToolStripMenuItemHilfeInfo});
			this->ToolStripMenuItemHilfe->Name = L"ToolStripMenuItemHilfe";
			this->ToolStripMenuItemHilfe->Size = System::Drawing::Size(40, 20);
			this->ToolStripMenuItemHilfe->Text = L"Hilfe";
			// 
			// ToolStripMenuItemHilfeInfo
			// 
			this->ToolStripMenuItemHilfeInfo->Name = L"ToolStripMenuItemHilfeInfo";
			this->ToolStripMenuItemHilfeInfo->Size = System::Drawing::Size(94, 22);
			this->ToolStripMenuItemHilfeInfo->Text = L"Info";
			this->ToolStripMenuItemHilfeInfo->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemHilfeInfo_Click);
			// 
			// toolStripContainer1
			// 
			this->toolStripContainer1->BottomToolStripPanelVisible = false;
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->AutoScroll = true;
			this->toolStripContainer1->ContentPanel->Controls->Add(this->splitContainer1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(870, 441);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->LeftToolStripPanelVisible = false;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->RightToolStripPanelVisible = false;
			this->toolStripContainer1->Size = System::Drawing::Size(870, 515);
			this->toolStripContainer1->TabIndex = 1;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStripAdresse);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStripNavigation);
			// 
			// toolStripAdresse
			// 
			this->toolStripAdresse->ContextMenuStrip = this->contextMenuSymbol;
			this->toolStripAdresse->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStripAdresse->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ToolStripTextBoxAdresse, 
				this->ToolStripButtonLos});
			this->toolStripAdresse->Location = System::Drawing::Point(3, 24);
			this->toolStripAdresse->Name = L"toolStripAdresse";
			this->toolStripAdresse->Size = System::Drawing::Size(437, 25);
			this->toolStripAdresse->TabIndex = 2;
			// 
			// contextMenuSymbol
			// 
			this->contextMenuSymbol->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->contextMenuSymbolAddr, 
				this->contextMenuSymbolNavi});
			this->contextMenuSymbol->Name = L"contextMenuSymbol";
			this->contextMenuSymbol->Size = System::Drawing::Size(126, 48);
			// 
			// contextMenuSymbolAddr
			// 
			this->contextMenuSymbolAddr->Checked = true;
			this->contextMenuSymbolAddr->CheckOnClick = true;
			this->contextMenuSymbolAddr->CheckState = System::Windows::Forms::CheckState::Checked;
			this->contextMenuSymbolAddr->Name = L"contextMenuSymbolAddr";
			this->contextMenuSymbolAddr->Size = System::Drawing::Size(125, 22);
			this->contextMenuSymbolAddr->Text = L"Adresse";
			this->contextMenuSymbolAddr->Click += gcnew System::EventHandler(this, &Form1::contextMenuSymbolAdresse_Click);
			// 
			// contextMenuSymbolNavi
			// 
			this->contextMenuSymbolNavi->Checked = true;
			this->contextMenuSymbolNavi->CheckOnClick = true;
			this->contextMenuSymbolNavi->CheckState = System::Windows::Forms::CheckState::Checked;
			this->contextMenuSymbolNavi->Name = L"contextMenuSymbolNavi";
			this->contextMenuSymbolNavi->Size = System::Drawing::Size(125, 22);
			this->contextMenuSymbolNavi->Text = L"Navigation";
			this->contextMenuSymbolNavi->Click += gcnew System::EventHandler(this, &Form1::contextMenuSymbolNavi_Click);
			// 
			// ToolStripTextBoxAdresse
			// 
			this->ToolStripTextBoxAdresse->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->ToolStripTextBoxAdresse->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::AllSystemSources;
			this->ToolStripTextBoxAdresse->Name = L"ToolStripTextBoxAdresse";
			this->ToolStripTextBoxAdresse->Size = System::Drawing::Size(350, 25);
			this->ToolStripTextBoxAdresse->ToolTipText = L"Geben Sie hier die Adresse ein";
			this->ToolStripTextBoxAdresse->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::ToolStripTextBoxAdresse_KeyDown);
			// 
			// ToolStripButtonLos
			// 
			this->ToolStripButtonLos->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripButtonLos.Image")));
			this->ToolStripButtonLos->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonLos->Name = L"ToolStripButtonLos";
			this->ToolStripButtonLos->Size = System::Drawing::Size(75, 22);
			this->ToolStripButtonLos->Text = L"Los geht\'s";
			this->ToolStripButtonLos->MouseEnter += gcnew System::EventHandler(this, &Form1::ToolStripButtonLos_MouseEnter);
			this->ToolStripButtonLos->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonLos_Click);
			// 
			// toolStripNavigation
			// 
			this->toolStripNavigation->ContextMenuStrip = this->contextMenuSymbol;
			this->toolStripNavigation->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStripNavigation->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->ToolStripButtonRueck, 
				this->ToolStripButtonVor, this->ToolStripButtonNeuladen, this->ToolStripButtonLadenAbbr});
			this->toolStripNavigation->Location = System::Drawing::Point(3, 49);
			this->toolStripNavigation->Name = L"toolStripNavigation";
			this->toolStripNavigation->Size = System::Drawing::Size(102, 25);
			this->toolStripNavigation->TabIndex = 3;
			// 
			// ToolStripButtonRueck
			// 
			this->ToolStripButtonRueck->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonRueck->Enabled = false;
			this->ToolStripButtonRueck->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripButtonRueck.Image")));
			this->ToolStripButtonRueck->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonRueck->Name = L"ToolStripButtonRueck";
			this->ToolStripButtonRueck->Size = System::Drawing::Size(23, 22);
			this->ToolStripButtonRueck->Text = L"Zurück";
			this->ToolStripButtonRueck->ToolTipText = L"Zurück";
			this->ToolStripButtonRueck->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemRueck_Click);
			// 
			// ToolStripButtonVor
			// 
			this->ToolStripButtonVor->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonVor->Enabled = false;
			this->ToolStripButtonVor->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripButtonVor.Image")));
			this->ToolStripButtonVor->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonVor->Name = L"ToolStripButtonVor";
			this->ToolStripButtonVor->Size = System::Drawing::Size(23, 22);
			this->ToolStripButtonVor->Text = L"Vorwärts";
			this->ToolStripButtonVor->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemVor_Click);
			// 
			// ToolStripButtonNeuladen
			// 
			this->ToolStripButtonNeuladen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonNeuladen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripButtonNeuladen.Image")));
			this->ToolStripButtonNeuladen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonNeuladen->Name = L"ToolStripButtonNeuladen";
			this->ToolStripButtonNeuladen->Size = System::Drawing::Size(23, 22);
			this->ToolStripButtonNeuladen->Text = L"Neuladen";
			this->ToolStripButtonNeuladen->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemNeuladen_Click);
			// 
			// ToolStripButtonLadenAbbr
			// 
			this->ToolStripButtonLadenAbbr->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButtonLadenAbbr->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToolStripButtonLadenAbbr.Image")));
			this->ToolStripButtonLadenAbbr->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButtonLadenAbbr->Name = L"ToolStripButtonLadenAbbr";
			this->ToolStripButtonLadenAbbr->Size = System::Drawing::Size(23, 22);
			this->ToolStripButtonLadenAbbr->Text = L"Laden abbrechen";
			this->ToolStripButtonLadenAbbr->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItemLadenAbbr_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(870, 515);
			this->ContextMenuStrip = this->contextMenuSymbol;
			this->Controls->Add(this->toolStripContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			this->splitContainer1->ResumeLayout(false);
			this->contextMenuVerlauf->ResumeLayout(false);
			this->toolStripNavi->ResumeLayout(false);
			this->toolStripNavi->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->toolStripAdresse->ResumeLayout(false);
			this->toolStripAdresse->PerformLayout();
			this->contextMenuSymbol->ResumeLayout(false);
			this->toolStripNavigation->ResumeLayout(false);
			this->toolStripNavigation->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void webInhalt_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
				 if (!listBoxVerlauf ->Items ->Contains(webInhalt ->Url))
				 {
					  listBoxVerlauf ->Items ->Add(webInhalt ->Url);
				 }
				 Text = "MiniBrowser - " + webInhalt ->Document ->Title;
				 ToolStripTextBoxAdresse ->Text = webInhalt ->Url ->ToString();

				 if (webInhalt ->CanGoBack)
				 {
					 ToolStripMenuItemRueck ->Enabled = true;
					 ToolStripButtonRueck ->Enabled = true;
				 }
				 else
				 {
					 ToolStripMenuItemRueck ->Enabled = false;
					 ToolStripButtonRueck ->Enabled = false;
				 }

				 if (webInhalt ->CanGoForward)
				 {
					 ToolStripMenuItemVor ->Enabled = true;
					 ToolStripButtonVor ->Enabled = true;
				 }
				 else
				 {
					 ToolStripMenuItemVor ->Enabled = false;
					 ToolStripButtonVor ->Enabled = false;
				 }

			 }
	private: System::Void ToolStripMenuItemBeenden_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void ToolStripMenuItemOeffnen_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ adresse;
			 urlOeffnenDialog ^oeffnenForm = gcnew urlOeffnenDialog;
			 oeffnenForm ->ShowDialog();

			 if (oeffnenForm ->DialogResult == ::DialogResult::OK)
			 {
				 adresse = oeffnenForm ->liefereAdresse();
				 webInhalt ->Navigate(adresse);
				 oeffnenForm ->Close();
			 }
		 }
private: System::Void ToolStripMenuItemVor_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 webInhalt ->GoForward();
			
		 }
private: System::Void ToolStripMenuItemRueck_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 webInhalt ->GoBack();
			 
		 }
private: System::Void ToolStripMenuItemNeuladen_Click(System::Object^  sender, System::EventArgs^  e) {
			 webInhalt ->Refresh();
		 }
private: System::Void ToolStripMenuItemLadenAbbr_Click(System::Object^  sender, System::EventArgs^  e) {
			 webInhalt ->Stop();
		 }
private: System::Void toolStripButtonLos_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ToolStripTextBoxAdresse ->Text != String::Empty)
			 {
				 webInhalt ->Navigate(ToolStripTextBoxAdresse ->Text);
			 }
		 }
private: System::Void ToolStripTextBoxAdresse_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e ->KeyCode == Keys::Enter)
			 {
				 toolStripButtonLos_Click(sender, e);
			 }
		 }
private: System::Void ToolStripButtonLos_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ToolStripButtonLos ->ToolTipText = "Los geht's zu " + ToolStripTextBoxAdresse ->Text;
		 }
private: System::Void ToolStripMenuItemAnsichtNavi_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ToolStripMenuItemAnsichtNavi ->Checked)
			 {
				 splitContainer1 ->Panel1Collapsed = false;
			 }
			 else
			 {
				 splitContainer1 ->Panel1Collapsed = true;
			 }
		 }
private: System::Void ToolStripMenuItemAnsichtSymbolAddr_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ToolStripMenuItemAnsichtVollbild ->Checked)
			 {
				 ToolStripMenuItemAnsichtVollbild ->Checked = false;
			 }
			 
			 if (ToolStripMenuItemAnsichtSymbolAddr ->Checked)
			 {
				 toolStripAdresse ->Visible = true;
				 contextMenuSymbolAddr ->Checked = true;
			 }
			 else
			 {
				 toolStripAdresse ->Visible = false;
				 contextMenuSymbolAddr ->Checked = false;			
				 if (ToolStripMenuItemAnsichtSymbolNavi ->Checked == false)
				 {
					 ToolStripMenuItemAnsichtVollbild ->Checked = true;
				 }
			 }
		 }
private: System::Void ToolStripMenuItemAnsichtSymbolNavi_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ToolStripMenuItemAnsichtVollbild ->Checked)
			 {
				 ToolStripMenuItemAnsichtVollbild ->Checked = false;
			 }
			 
			 if (ToolStripMenuItemAnsichtSymbolNavi ->Checked)
			 {
				 toolStripNavigation ->Visible = true;
				 contextMenuSymbolNavi ->Checked = true;
			 }
			 else
			 {
				 toolStripNavigation ->Visible = false;
				 contextMenuSymbolNavi ->Checked = false;
				 if (ToolStripMenuItemAnsichtSymbolAddr ->Checked == false)
				 {
					ToolStripMenuItemAnsichtVollbild ->Checked = true;
				 }
			 }
		 }
private: System::Void ToolStripButtonSchliessen_Click(System::Object^  sender, System::EventArgs^  e) {
			 ToolStripMenuItemAnsichtNavi ->Checked = false;
			 splitContainer1 ->Panel1Collapsed = true;
		 }
private: System::Void listBoxVerlauf_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (listBoxVerlauf ->SelectedIndex != -1)
			 {
				 webInhalt ->Navigate(listBoxVerlauf ->SelectedItem ->ToString());
			 }
		 }
private: System::Void ContextMenuVerlaufSort_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ContextMenuVerlaufSort ->Checked)
			 {
				 listBoxVerlauf ->Sorted = true;
			 }
			 else
			 {
				 listBoxVerlauf ->Sorted = false;
			 }
		 }
private: System::Void ContextMenuVerlaufLoeschen_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBoxVerlauf ->Items ->Clear();
		 }
private: System::Void webInhalt_Navigating(System::Object^  sender, System::Windows::Forms::WebBrowserNavigatingEventArgs^  e) {
			 toolStripProgressBar1 ->Visible = true;
		 }
private: System::Void webInhalt_ProgressChanged(System::Object^  sender, System::Windows::Forms::WebBrowserProgressChangedEventArgs^  e) {
			 toolStripStatusLabel1 ->Text = "Lade " + e ->CurrentProgress/1024 + " Bytes von " + e ->MaximumProgress/1024;
			 toolStripProgressBar1 ->Maximum = Convert::ToInt32(e ->MaximumProgress);
			 toolStripProgressBar1 ->Value = Convert::ToInt32(e ->CurrentProgress);
			 
			 if (e ->CurrentProgress == -1)
			 {
				 toolStripStatusLabel1 ->Visible = false;
			 }

			 if (e ->CurrentProgress == e ->MaximumProgress)
			 {
				 toolStripStatusLabel1 ->Text = "Seite geladen";
				 toolStripProgressBar1 ->Visible = false;
			 }
		 }
private: System::Void ToolStripMenuItemHilfeInfo_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Hier stehen ein paar Informationen \nund hier... \nund hier...","Hinweis",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
private: System::Void ToolStripMenuItemAnsichtVollbild_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ToolStripMenuItemAnsichtVollbild ->Checked)
			 {
				toolStripNavigation ->Visible = false;
				toolStripAdresse ->Visible = false;
				contextMenuSymbolNavi ->Checked = false;
				contextMenuSymbolAddr ->Checked = false;
				ToolStripMenuItemAnsichtSymbolAddr ->Checked = false;
				ToolStripMenuItemAnsichtSymbolNavi ->Checked = false;

			 }
			 else
			 {
				toolStripNavigation ->Visible = true;
				toolStripAdresse ->Visible = true;
				contextMenuSymbolNavi ->Checked = true;
				contextMenuSymbolAddr ->Checked = true;
				ToolStripMenuItemAnsichtSymbolAddr ->Checked = true;
				ToolStripMenuItemAnsichtSymbolNavi ->Checked = true;
			 }

		 }
private: System::Void contextMenuSymbolAdresse_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (contextMenuSymbolAddr ->Checked )
			 {
				 ToolStripMenuItemAnsichtSymbolAddr ->Checked = true;
				 toolStripAdresse ->Visible = true;

				 ToolStripMenuItemAnsichtVollbild ->Checked = false;
				 
			 }
			 else
			 {
				 ToolStripMenuItemAnsichtSymbolAddr ->Checked = false;
				 toolStripAdresse ->Visible = false;
				 if (contextMenuSymbolNavi ->Checked == false)
				 {
					 ToolStripMenuItemAnsichtVollbild ->Checked = true;
				 }
			 }
			 

		 }
private: System::Void contextMenuSymbolNavi_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (contextMenuSymbolNavi ->Checked)
			 {
				ToolStripMenuItemAnsichtSymbolNavi ->Checked = true;
				toolStripNavigation ->Visible = true;

				ToolStripMenuItemAnsichtVollbild ->Checked = false;
			 }
			 else
			 {
				 ToolStripMenuItemAnsichtSymbolNavi ->Checked = false;
				 toolStripNavigation ->Visible = false;
				 if (contextMenuSymbolAddr ->Checked == false)
				 {
					 ToolStripMenuItemAnsichtVollbild ->Checked = true;
				 }
			 }
		 }
};
}

