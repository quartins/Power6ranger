#pragma once

namespace Power6Rangers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WorkShow
	/// </summary>
	public ref class WorkShow : public System::Windows::Forms::Form
	{
	public:
		WorkShow(void)
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
		~WorkShow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WorkShow::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(150, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 850);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			int num;
			Random^ random = gcnew Random();
			num = random->Next(1, 14);
			switch (num)
			{
			case 1:this->pictureBox1->Load("01-wands.png");
				break;
			case 2:this->pictureBox1->Load("02-wands.png");
				break;
			case 3:this->pictureBox1->Load("03-wands.png");
				break;
			case 4:this->pictureBox1->Load("04-wands.png");
				break;
			case 5:this->pictureBox1->Load("05-wands.png");
				break;
			case 6:this->pictureBox1->Load("06-wands.png");
				break;
			case 7:this->pictureBox1->Load("07-wands.png");
				break;
			case 8:this->pictureBox1->Load("08-wands.png");
				break;
			case 9:this->pictureBox1->Load("09-wands.png");
				break;
			case 10:this->pictureBox1->Load("10-wands.png");
				break;
			case 11:this->pictureBox1->Load("1page-wands.png");
				break;
			case 12:this->pictureBox1->Load("2knight-wands.png");
				break;
			case 13:this->pictureBox1->Load("3queen-wands.png");
				break;
			case 14:this->pictureBox1->Load("4king-wands.png");
				break;

			default: break;
			}
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Location = System::Drawing::Point(820, 50);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(600, 850);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			if (num == 1)
				this->pictureBox2->Load("show_wands01.jpg");
			else if (num == 2)
				this->pictureBox2->Load("show_wands02.jpg");
			else if (num == 3)
				this->pictureBox2->Load("show_wands03.jpg");
			else if (num == 4)
				this->pictureBox2->Load("show_wands04.jpg");
			else if (num == 5)
				this->pictureBox2->Load("show_wands05.jpg");
			else if (num == 6)
				this->pictureBox2->Load("show_wands06.jpg");
			else if (num == 7)
				this->pictureBox2->Load("show_wands07.jpg");
			else if (num == 8)
				this->pictureBox2->Load("show_wands08.jpg");
			else if (num == 9)
				this->pictureBox2->Load("show_wands09.jpg");
			else if (num == 10)
				this->pictureBox2->Load("show_wands10.jpg");
			else if (num == 11)
				this->pictureBox2->Load("show_wands11.jpg");
			else if (num == 12)
				this->pictureBox2->Load("show_wands12.jpg");
			else if (num == 13)
				this->pictureBox2->Load("show_wands13.jpg");
			else if (num == 14)
				this->pictureBox2->Load("show_wands14.jpg");
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(639, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 59);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WorkShow::button1_Click);
			// 
			// WorkShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(896, 394);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"WorkShow";
			this->Text = L"WorkShow";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		
	}
	};
}
