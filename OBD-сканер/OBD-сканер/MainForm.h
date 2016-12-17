#pragma once

#include "ELM323.h"
namespace OBDÒÍ‡ÌÂ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	
	char zz[10] ;
	char ss[8];
	int readint[8];
	int ind;
	int delayreed;
	
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		delegate void SetRichTextDelegateType(System::String ^);
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ELM323 device;

		//	device = new device();
		//	device.setSpeed(1);
		
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^  OBDCOM;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripComboBox^  tcmbcom;
	private: System::Windows::Forms::ToolStripButton^  tbConnect;
	private: System::Windows::Forms::StatusStrip^  MainStrip;
	private: System::Windows::Forms::ToolStripStatusLabel^  StatusLabel;







	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚˚ıÓ‰ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TabControl^  tbWork;
	private: System::Windows::Forms::TabPage^  tbpStart;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  btStart;
	private: System::Windows::Forms::ComboBox^  cbcomport;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btclearlog;
	private: System::Windows::Forms::ListBox^  lstlox;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  lblrpm;




	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblvoltvalue;
	private: System::Windows::Forms::Label^  lblvolt;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  lblpower;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lbltemp;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Timer^  timer2;











	protected: 
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->OBDCOM = (gcnew System::IO::Ports::SerialPort(this->components));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tcmbcom = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->tbConnect = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->MainStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->StatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbWork = (gcnew System::Windows::Forms::TabControl());
			this->tbpStart = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblrpm = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblvoltvalue = (gcnew System::Windows::Forms::Label());
			this->lblvolt = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btclearlog = (gcnew System::Windows::Forms::Button());
			this->lstlox = (gcnew System::Windows::Forms::ListBox());
			this->btStart = (gcnew System::Windows::Forms::Button());
			this->cbcomport = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbltemp = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblpower = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			this->MainStrip->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tbWork->SuspendLayout();
			this->tbpStart->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// OBDCOM
			// 
			this->OBDCOM->BaudRate = 38400;
			this->OBDCOM->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MainForm::OBDCOM_DataReceived);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->tcmbcom, this->tbConnect, 
				this->toolStripButton2});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(856, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// tcmbcom
			// 
			this->tcmbcom->Name = L"tcmbcom";
			this->tcmbcom->Size = System::Drawing::Size(121, 25);
			this->tcmbcom->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::tcmbcom_SelectedIndexChanged);
			// 
			// tbConnect
			// 
			this->tbConnect->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tbConnect->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tbConnect->Name = L"tbConnect";
			this->tbConnect->Size = System::Drawing::Size(23, 22);
			this->tbConnect->Text = L"œÓ‰ÍÎ˛˜ËÚ¸";
			this->tbConnect->Click += gcnew System::EventHandler(this, &MainForm::tbConnect_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton2_Click);
			// 
			// MainStrip
			// 
			this->MainStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->StatusLabel, this->toolStripProgressBar1});
			this->MainStrip->Location = System::Drawing::Point(0, 472);
			this->MainStrip->Name = L"MainStrip";
			this->MainStrip->Size = System::Drawing::Size(856, 22);
			this->MainStrip->TabIndex = 1;
			this->MainStrip->Text = L"statusStrip1";
			// 
			// StatusLabel
			// 
			this->StatusLabel->Name = L"StatusLabel";
			this->StatusLabel->Size = System::Drawing::Size(148, 17);
			this->StatusLabel->Text = L"”ÒÚÓÈÒÚ‚Ó ÌÂ ÔÓ‰ÍÎ˛˜ÂÌÓ";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripProgressBar1->AutoSize = false;
			this->toolStripProgressBar1->Margin = System::Windows::Forms::Padding(300, 3, 1, 3);
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->Ù‡ÈÎToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(856, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->‚˚ıÓ‰ToolStripMenuItem});
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// ‚˚ıÓ‰ToolStripMenuItem
			// 
			this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
			this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->‚˚ıÓ‰ToolStripMenuItem->Text = L"¬˚ıÓ‰";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Location = System::Drawing::Point(0, 52);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(856, 417);
			this->panel1->TabIndex = 3;
			// 
			// tbWork
			// 
			this->tbWork->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbWork->Controls->Add(this->tbpStart);
			this->tbWork->Controls->Add(this->tabPage2);
			this->tbWork->Location = System::Drawing::Point(3, 52);
			this->tbWork->Name = L"tbWork";
			this->tbWork->SelectedIndex = 0;
			this->tbWork->Size = System::Drawing::Size(850, 414);
			this->tbWork->TabIndex = 0;
			this->tbWork->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::tbWork_SelectedIndexChanged);
			// 
			// tbpStart
			// 
			this->tbpStart->Controls->Add(this->button2);
			this->tbpStart->Controls->Add(this->button1);
			this->tbpStart->Controls->Add(this->textBox1);
			this->tbpStart->Controls->Add(this->panel2);
			this->tbpStart->Controls->Add(this->btclearlog);
			this->tbpStart->Controls->Add(this->lstlox);
			this->tbpStart->Controls->Add(this->btStart);
			this->tbpStart->Controls->Add(this->cbcomport);
			this->tbpStart->Controls->Add(this->label1);
			this->tbpStart->Location = System::Drawing::Point(4, 22);
			this->tbpStart->Name = L"tbpStart";
			this->tbpStart->Padding = System::Windows::Forms::Padding(3);
			this->tbpStart->Size = System::Drawing::Size(842, 388);
			this->tbpStart->TabIndex = 0;
			this->tbpStart->Text = L"—“¿–“";
			this->tbpStart->UseVisualStyleBackColor = true;
			this->tbpStart->Click += gcnew System::EventHandler(this, &MainForm::tabPage1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(640, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 45);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(367, 337);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(241, 20);
			this->textBox1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->lblpower);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->lbltemp);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->lblrpm);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->lblvoltvalue);
			this->panel2->Controls->Add(this->lblvolt);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(367, 11);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(458, 301);
			this->panel2->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(282, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ó·ÓÓÚ˚";
			// 
			// lblrpm
			// 
			this->lblrpm->AutoSize = true;
			this->lblrpm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lblrpm->Location = System::Drawing::Point(213, 62);
			this->lblrpm->Name = L"lblrpm";
			this->lblrpm->Size = System::Drawing::Size(20, 24);
			this->lblrpm->TabIndex = 5;
			this->lblrpm->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(16, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(191, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Œ·ÓÓÚ˚ ‰‚Ë„‡ÚÂÎˇ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(282, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"¬";
			// 
			// lblvoltvalue
			// 
			this->lblvoltvalue->AutoSize = true;
			this->lblvoltvalue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lblvoltvalue->Location = System::Drawing::Point(213, 30);
			this->lblvoltvalue->Name = L"lblvoltvalue";
			this->lblvoltvalue->Size = System::Drawing::Size(20, 24);
			this->lblvoltvalue->TabIndex = 2;
			this->lblvoltvalue->Text = L"0";
			// 
			// lblvolt
			// 
			this->lblvolt->AutoSize = true;
			this->lblvolt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lblvolt->Location = System::Drawing::Point(16, 30);
			this->lblvolt->Name = L"lblvolt";
			this->lblvolt->Size = System::Drawing::Size(191, 24);
			this->lblvolt->TabIndex = 1;
			this->lblvolt->Text = L"Õ‡ÔˇÊÂÌËÂ  ‚ ÒÂÚË";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ŒÒÌÓ‚Ì˚Â ı‡‡ÍÚÂËÒÚËÍË";
			// 
			// btclearlog
			// 
			this->btclearlog->Location = System::Drawing::Point(226, 347);
			this->btclearlog->Name = L"btclearlog";
			this->btclearlog->Size = System::Drawing::Size(102, 23);
			this->btclearlog->TabIndex = 4;
			this->btclearlog->Text = L"Œ˜ËÒÚËÚ¸ ÎÓ„";
			this->btclearlog->UseVisualStyleBackColor = true;
			// 
			// lstlox
			// 
			this->lstlox->FormattingEnabled = true;
			this->lstlox->Location = System::Drawing::Point(9, 73);
			this->lstlox->Name = L"lstlox";
			this->lstlox->Size = System::Drawing::Size(319, 264);
			this->lstlox->TabIndex = 3;
			// 
			// btStart
			// 
			this->btStart->Location = System::Drawing::Point(235, 31);
			this->btStart->Name = L"btStart";
			this->btStart->Size = System::Drawing::Size(93, 23);
			this->btStart->TabIndex = 2;
			this->btStart->Text = L"—Ú‡Ú";
			this->btStart->UseVisualStyleBackColor = true;
			this->btStart->Click += gcnew System::EventHandler(this, &MainForm::btStart_Click);
			// 
			// cbcomport
			// 
			this->cbcomport->FormattingEnabled = true;
			this->cbcomport->Location = System::Drawing::Point(9, 33);
			this->cbcomport->Name = L"cbcomport";
			this->cbcomport->Size = System::Drawing::Size(202, 21);
			this->cbcomport->TabIndex = 1;
			this->cbcomport->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cbcomport_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"COM-œÓÚ";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(842, 388);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(786, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(283, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 24);
			this->label7->TabIndex = 9;
			this->label7->Text = L"—";
			// 
			// lbltemp
			// 
			this->lbltemp->AutoSize = true;
			this->lbltemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lbltemp->Location = System::Drawing::Point(214, 95);
			this->lbltemp->Name = L"lbltemp";
			this->lbltemp->Size = System::Drawing::Size(20, 24);
			this->lbltemp->TabIndex = 8;
			this->lbltemp->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(17, 95);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(154, 24);
			this->label9->TabIndex = 7;
			this->label9->Text = L"ÚÂÏÔ ‰‚Ë„‡ÚÂÎˇ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(283, 131);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 24);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Í¬Ú";
			// 
			// lblpower
			// 
			this->lblpower->AutoSize = true;
			this->lblpower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lblpower->Location = System::Drawing::Point(214, 131);
			this->lblpower->Name = L"lblpower";
			this->lblpower->Size = System::Drawing::Size(20, 24);
			this->lblpower->TabIndex = 11;
			this->lblpower->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(17, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 24);
			this->label12->TabIndex = 10;
			this->label12->Text = L"ÏÓ¯ÌÓÒÚ¸";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 494);
			this->Controls->Add(this->tbWork);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->MainStrip);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"OBD-—Í‡ÌÂ";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->MainStrip->ResumeLayout(false);
			this->MainStrip->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tbWork->ResumeLayout(false);
			this->tbpStart->ResumeLayout(false);
			this->tbpStart->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {

				 ELM323 dev;
				 array<String^>^ serialPorts = nullptr;

				 serialPorts=OBDCOM->GetPortNames();
				 for each(String^ port in serialPorts)
				 {
					tcmbcom->Items->Add(port);
					cbcomport->Items->Add(port);
				 };
				 tcmbcom->SelectedIndex=0;
				 cbcomport->SelectedIndex=0;
				 dev.comport=tcmbcom->Items[tcmbcom->SelectedIndex]->ToString();

				 //cmbSpeed->SelectedIndex=10;
				 //add speed select
			 }
private: System::Void  tbConnect_Click(System::Object^  sender, System::EventArgs^  e) {

				 ELM323 device;
	

				 //ÂÒÎË ÔÓÚ ÓÚÍ˚Ú
				 if (OBDCOM->IsOpen)
				 {
					 OBDCOM->Close();
					 lstlox->Items->Add("«‡Í˚ÚËÂ ÔÓÚ‡ "+ OBDCOM->PortName);
				 }

				 OBDCOM->PortName=device.comport;
				 OBDCOM->Open();
				 if (OBDCOM->IsOpen)
				 {
					 StatusLabel->Text="œÓÚ "+ device.comport+" ÓÚÍ˚Ú ";
					 lstlox->Items->Add("œÓÚ "+ device.comport+" ÓÚÍ˚Ú ");
					 StartCheking();

				 }
				 else
				 {
					StatusLabel->Text="œÓÚ "+ device.comport+" Á‡Í˚Ú ";
					lstlox->Items->Add("œÓÚ "+ device.comport+" Á‡Í˚Ú ");
					
				 }					
		 }

private: System::Void tcmbcom_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ cportname;
			 ELM323 device;

			 int selectcom=tcmbcom->SelectedIndex;
			 cportname=tcmbcom->Items[selectcom]->ToString();

			cbcomport->SelectedIndex =  selectcom;
			 device.comport=cportname;
			 //this->label1->Text=z.comport;	
		 }
private: System::Void toolStripStatusLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tbWork_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 tbConnect_Click(sender,e);
		 }
private: System::Void cbcomport_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ cportname;
			 ELM323 device;

			 int selectcom=cbcomport->SelectedIndex;
			 cportname=cbcomport->Items[selectcom]->ToString();

			 tcmbcom->SelectedIndex =  selectcom;
			 device.comport=cportname;
		 }
private: System::Void OBDCOM_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			 String ^ g;
			  ELM323 device;
			// ind=OBDCOM->BytesToRead;
			 g= OBDCOM->ReadExisting();
			 int i=0;
			// String ^ h=g[0];
			 //for (int i=0;i<ind;i++)
				 //readint[i]= OBDCOM->ReadByte();

			
			 device.ReadDataELM(g);
			
			

			 SetRichTextDelegateType ^pfnDelegate = gcnew SetRichTextDelegateType(this, &MainForm::SetRichText);
			 lstlox->Invoke(pfnDelegate, g);
		 }

void SetRichText(String ^myString)
		 {
		  /*	String ^readb;
			 for (int i=0 ; i<ind;i++ )
			 {
				 readb+=" "+readint[i].ToString("X2");
				 char gg=char(readint[i]);
				 readb2=gg.ToString();
			 }
		*/
			 lstlox->Items->Add("R<-"+myString);
		 }

private: void SendComand(String ^str)
		 {
			 array<System::Byte>^ marker;
			 marker= gcnew array<System::Byte> { 0x0D,0x0A };

			 //serialPort1->Write(textBox1->Text+"\n\r");
			 OBDCOM->Write(str);
			 //	 serialPort1->Write("\r\n");
			 OBDCOM->Write(marker,0,2);	
			 lstlox->Items->Add("W->"+str);
		 }

private:bool StartCheking(void)
		{
			ELM323 device;
			SendComand("ATZ");
			timer1->Interval=100;
			timer1->Enabled=true;
			lstlox->Items->Add("”ÒÚ‡ÌÓ‚Í‡ Ò‚ˇÁË Ò ÛÒÚÓÈÒÚ‚ÓÏ");
			timer1->Start();
			return true;
		}


private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 ELM323 device;
			 static int i;

			 if (i>50)
			 {
				 timer1->Stop();
				 i=0;
				 lstlox->Items->Add("ÕÂ Û‰‡ÂÚÒˇ ÔÓ‰ÍÎ˛˜ËÚÒˇ Í ÛÒÚÓÈÒÚ‚Û");
			 }
			 if(device.connectOBD)
			 {
				 lstlox->Items->Add("”ÒÚÓÈÒÚ‚Ó Ì‡È‰ÂÌÓ");
				 SendComand("AT SP 0");
				 timer1->Stop();
				 SendComand("0100");
			 }
			 else
			 {
				 i++;
				 return;
			 }
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
 array<System::Byte>^ marker;
			 marker= gcnew array<System::Byte> {0x0D };

			 OBDCOM->Write(textBox1->Text);
			 OBDCOM->Write(marker,0,1);	
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 ELM323 dev;
			 SendComand("0105");
			 lstlox->Items->Add(dev.mode1[5]);
			 lbltemp->Text=dev.mode1[5];
			 SendComand("010—");
			 lstlox->Items->Add(dev.mode1[12]);
			 lbltemp->Text=dev.mode1[12];
		 }
};
}

