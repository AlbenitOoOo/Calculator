#pragma once

namespace Kalkulator2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ naukowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ WhoIsMeToolStripMenuItem;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Label^ lblshow;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtBox;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			System::Windows::Forms::ToolStripMenuItem^ PlikToolStripMenuItem;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naukowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->WhoIsMeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->lblshow = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			PlikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// PlikToolStripMenuItem
			// 
			PlikToolStripMenuItem->Checked = true;
			PlikToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			PlikToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			PlikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardToolStripMenuItem,
					this->naukowyToolStripMenuItem, this->exitToolStripMenuItem
			});
			PlikToolStripMenuItem->Name = L"PlikToolStripMenuItem";
			PlikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			PlikToolStripMenuItem->Text = L"Plik";
			PlikToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->standardToolStripMenuItem->Text = L"Standardowy";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
			// 
			// naukowyToolStripMenuItem
			// 
			this->naukowyToolStripMenuItem->Name = L"naukowyToolStripMenuItem";
			this->naukowyToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->naukowyToolStripMenuItem->Text = L"Naukowy";
			this->naukowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::scienceToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->exitToolStripMenuItem->Text = L"Wyjście";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				PlikToolStripMenuItem,
					this->WhoIsMeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(377, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// WhoIsMeToolStripMenuItem
			// 
			this->WhoIsMeToolStripMenuItem->Name = L"WhoIsMeToolStripMenuItem";
			this->WhoIsMeToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->WhoIsMeToolStripMenuItem->Text = L"Autor";
			this->WhoIsMeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::WhoIsMeToolStripMenuItem_Click);
			// 
			// txtBox
			// 
			this->txtBox->BackColor = System::Drawing::Color::White;
			this->txtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtBox->Enabled = false;
			this->txtBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtBox->Location = System::Drawing::Point(38, 48);
			this->txtBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtBox->Multiline = true;
			this->txtBox->Name = L"txtBox";
			this->txtBox->ReadOnly = true;
			this->txtBox->Size = System::Drawing::Size(292, 74);
			this->txtBox->TabIndex = 1;
			this->txtBox->Text = L" ";
			this->txtBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Font = (gcnew System::Drawing::Font(L"Wingdings", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button7->Location = System::Drawing::Point(38, 131);
			this->button7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 62);
			this->button7->TabIndex = 2;
			this->button7->Text = L"";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(113, 130);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ce";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(263, 131);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 62);
			this->button3->TabIndex = 5;
			this->button3->Text = L"+/-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(188, 198);
			this->button5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 62);
			this->button5->TabIndex = 8;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button66
			// 
			this->button66->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button66->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button66.BackgroundImage")));
			this->button66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button66->Location = System::Drawing::Point(113, 199);
			this->button66->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(67, 62);
			this->button66->TabIndex = 8;
			this->button66->Text = L"8";
			this->button66->UseVisualStyleBackColor = false;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(38, 198);
			this->button8->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 62);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(38, 333);
			this->button9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 62);
			this->button9->TabIndex = 6;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(113, 333);
			this->button10->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 62);
			this->button10->TabIndex = 7;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(188, 333);
			this->button11->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 62);
			this->button11->TabIndex = 8;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(263, 333);
			this->button12->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 62);
			this->button12->TabIndex = 9;
			this->button12->Text = L"*";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_arithmetc);
			this->button12->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::button_arith);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(38, 266);
			this->button13->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 62);
			this->button13->TabIndex = 6;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(113, 266);
			this->button14->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 62);
			this->button14->TabIndex = 7;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(188, 266);
			this->button15->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 62);
			this->button15->TabIndex = 8;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(263, 266);
			this->button16->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(67, 62);
			this->button16->TabIndex = 9;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_arithmetc);
			this->button16->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::button_arith);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(113, 469);
			this->button19->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(67, 62);
			this->button19->TabIndex = 25;
			this->button19->Text = L"%";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(188, 469);
			this->button22->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(67, 62);
			this->button22->TabIndex = 17;
			this->button22->Text = L"1/x";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button23->Location = System::Drawing::Point(188, 131);
			this->button23->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(67, 62);
			this->button23->TabIndex = 18;
			this->button23->Text = L"C";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->Location = System::Drawing::Point(38, 469);
			this->button27->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(67, 62);
			this->button27->TabIndex = 19;
			this->button27->Text = L"X^2";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button29->Location = System::Drawing::Point(263, 469);
			this->button29->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(67, 62);
			this->button29->TabIndex = 13;
			this->button29->Text = L"π";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(263, 401);
			this->button6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 62);
			this->button6->TabIndex = 30;
			this->button6->Text = L"/";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_arithmetc);
			this->button6->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::button_arith);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button33->Location = System::Drawing::Point(188, 401);
			this->button33->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(67, 62);
			this->button33->TabIndex = 29;
			this->button33->Text = L"=";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button34->Location = System::Drawing::Point(113, 401);
			this->button34->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(67, 62);
			this->button34->TabIndex = 28;
			this->button34->Text = L",";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			this->button34->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::button_arith);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button35->Location = System::Drawing::Point(38, 401);
			this->button35->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(67, 62);
			this->button35->TabIndex = 27;
			this->button35->Text = L"0";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// lblshow
			// 
			this->lblshow->AutoSize = true;
			this->lblshow->BackColor = System::Drawing::Color::White;
			this->lblshow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblshow->Location = System::Drawing::Point(40, 91);
			this->lblshow->Name = L"lblshow";
			this->lblshow->Size = System::Drawing::Size(0, 20);
			this->lblshow->TabIndex = 31;
			this->lblshow->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(263, 198);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 62);
			this->button2->TabIndex = 9;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_arithmetc);
			this->button2->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm::button_arith);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(377, 548);
			this->Controls->Add(this->lblshow);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->txtBox);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Wingdings", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Opacity = 0.94;
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double one;
		double two;
		double result;
		double a;
		bool status = false;
		bool przecinek;
		String^ ioperator;
		double b = 0;

		char ioperation;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 390;
		MyForm::Height = 520;
		txtBox->Width = 292;
		button29->Visible = false;
		button19->Visible = false;
		button27->Visible = false;
		button22->Visible = false;



	}
	private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void scienceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 387;
		MyForm::Height = 620;
		txtBox->Width = 292;
		button29->Visible = true;
		button19->Visible = true;
		button27->Visible = true;
		button22->Visible = true;

	}
	private: System::Void WhoIsMeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Michał Albiniak");
	}
	private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 390;
		MyForm::Height = 520;
		txtBox->Width = 292;
		button29->Visible = false;
		button19->Visible = false;
		button27->Visible = false;
		button22->Visible = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		//backspace
		if (txtBox->Text->Length > 0)
		{
			txtBox->Text = txtBox->Text->Remove(txtBox->Text->Length - 1, 1);
		}



	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		//sinus
		a = Double::Parse(txtBox->Text);
		lblshow->Text = System::Convert::ToString("sind" + "(" + (txtBox->Text) + ")");
		a = Math::Sin(a);
		txtBox->Text = System::Convert::ToString(a);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBox->Clear();
	}
	private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) {
		lblshow->Text = "";
		Button^ Numbers = safe_cast<Button^>(sender);
		//buttton numbers
		if (txtBox->Text == "0")
		{
			txtBox->Text = Numbers->Text;


		}
		else
		{
			txtBox->Text = txtBox->Text + Numbers->Text;
		}
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBox->Clear();
		lblshow->Text = "";
		one = 0;
		two = 0;
		result = 0;
		b = 0;

	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
		//decimal point

		if (przecinek)
		{
			txtBox->Text = "";
			przecinek = false;
		}
		if (txtBox->Text->Contains(","))
		{
			return;
		}
		else {
			txtBox->Text += ",";
		};
	}
	private: System::Void button_arithmetc(System::Object^ sender, System::EventArgs^ e) {
		//operators
		if (txtBox->Text != "" && txtBox->Text != "-") {
			Button^ op = safe_cast<Button^>(sender);
			one = Double::Parse(txtBox->Text);
			txtBox->Text = "";
			ioperator = op->Text;
			lblshow->Text = System::Convert::ToString(one) + "" + ioperator;
			b = 0;
		}
		else if (txtBox->Text == "")
		{
			txtBox->Text = "";
		}



	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ioperator == "/" || ioperator == "-" || ioperator == "+" || ioperator == "*")
		{
			lblshow->Text = "";
			if (txtBox->Text != "" && txtBox->Text != "-")
				two = Double::Parse(txtBox->Text);


			if (ioperator == "+" && b == 0)
			{
				b = two;
				result = one + two;
				txtBox->Text = System::Convert::ToString(result);
			}
			else if (ioperator == "+" && b != 0)
			{

				result = result + b;
				txtBox->Text = System::Convert::ToString(result);
			}
			else if (ioperator == "-" && b == 0)
			{
				b = two;

				result = one - b;
				txtBox->Text = System::Convert::ToString(result);
			}
			else if (ioperator == "-" && b != 0)
			{


				result = result - b;
				txtBox->Text = System::Convert::ToString(result);

			}
			else if (ioperator == "*" && b == 0)
			{
				b = two;
				result = one * two;
				txtBox->Text = System::Convert::ToString(result);

			}
			else if (ioperator == "*" && b != 0)
			{

				result = result * b;
				txtBox->Text = System::Convert::ToString(result);

			}
			else if (ioperator == "/" && b == 0)
			{
				b = two;

				result = one / b;
				txtBox->Text = System::Convert::ToString(result);

			}
			else if (ioperator == "/" && b != 0)
			{


				result = result / b;
				txtBox->Text = System::Convert::ToString(result);

			}
		}
		else if (ioperator == "")
		{
			txtBox->Text = System::Convert::ToString(one);

		}
	}

	private: System::Void button_arith(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// +/-
		if (txtBox->Text->Contains("-"))
		{
			txtBox->Text = txtBox->Text->Remove(0, 1);

		}
		else
		{
			txtBox->Text = "-" + txtBox->Text;
		}
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBox->Text = ("3,14159265359");
	}



	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(txtBox->Text) * Convert::ToDouble(txtBox->Text);
		txtBox->Text = Convert::ToString(a);
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(txtBox->Text) * Convert::ToDouble(txtBox->Text) * Convert::ToDouble(txtBox->Text);
		txtBox->Text = Convert::ToString(a);
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		a = Convert::ToDouble(1.0 / Convert::ToDouble(txtBox->Text));
		txtBox->Text = Convert::ToString(a);
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

		a = Convert::ToDouble(txtBox->Text) / Convert::ToDouble(100);
		txtBox->Text = Convert::ToString(a);
	}



	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		//bin
		int a = int::Parse(txtBox->Text);
		txtBox->Text = System::Convert::ToString(a, 2);
		lblshow->Text = "";
	}
	};
}