#pragma once

namespace Power6Rangers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MoneyShow1
	/// </summary>
	public ref class MoneyShow1 : public System::Windows::Forms::Form
	{
	public:
		MoneyShow1(void)
		{

			InitializeComponent();
			int num;
			Random^ random = gcnew Random;
			num = random->Next(1, 14);
			switch (num)
			{
			case 1:this->pictureBox1->Load("01-pentacles.png");
				break;
			case 2:this->pictureBox1->Load("02-pentacles.png");
				break;
			case 3:this->pictureBox1->Load("03-pentacles.png");
				break;
			case 4:this->pictureBox1->Load("04-pentacles.png");
				break;
			case 5:this->pictureBox1->Load("05-pentacles.png");
				break;
			case 6:this->pictureBox1->Load("06-pentacles.png");
				break;
			case 7:this->pictureBox1->Load("07-pentacles.png");
				break;
			case 8:this->pictureBox1->Load("08-pentacles.png");
				break;
			case 9:this->pictureBox1->Load("09-pentacles.png");
				break;
			case 10:this->pictureBox1->Load("10-pentacles.png");
				break;
			case 11:this->pictureBox1->Load("11-pentacles.png");
				break;
			case 12:this->pictureBox1->Load("12-pentacles.png");
				break;
			case 13:this->pictureBox1->Load("13-pentacles.png");
				break;
			case 14:this->pictureBox1->Load("14-pentacles.png");
				break;

			default: break;
			}

			if (num == 1)
				this->pictureBox2->Load("show_pentacles01.jpg");
			else if (num == 2)
				this->pictureBox2->Load("show_pentacles02.jpg");
			else if (num == 3)
				this->pictureBox2->Load("show_pentacles03.jpg");
			else if (num == 4)
				this->pictureBox2->Load("show_pentacles04.jpg");
			else if (num == 5)
				this->pictureBox2->Load("show_pentacles05.jpg");
			else if (num == 6)
				this->pictureBox2->Load("show_pentacles06.jpg");
			else if (num == 7)
				this->pictureBox2->Load("show_pentacles07.jpg");
			else if (num == 8)
				this->pictureBox2->Load("show_pentacles08.jpg");
			else if (num == 9)
				this->pictureBox2->Load("show_pentacles09.jpg");
			else if (num == 10)
				this->pictureBox2->Load("show_pentacles10.jpg");
			else if (num == 11)
				this->pictureBox2->Load("show_pentacles11.jpg");
			else if (num == 12)
				this->pictureBox2->Load("show_pentacles12.jpg");
			else if (num == 13)
				this->pictureBox2->Load("show_pentacles13.jpg");
			else if (num == 14)
				this->pictureBox2->Load("show_pentacles14.jpg");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MoneyShow1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MoneyShow1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(227, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(226, 340);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MoneyShow1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Location = System::Drawing::Point(719, 105);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(226, 340);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(504, 477);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 69);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MoneyShow1::button1_Click);
			// 
			// MoneyShow1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1077, 589);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MoneyShow1";
			this->Text = L"MoneyShow1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MoneyShow1::MoneyShow1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MoneyShow1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
