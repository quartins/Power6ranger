#pragma once

namespace Power6Rangers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MoneyShow
	/// </summary>
	public ref class MoneyShow : public System::Windows::Forms::Form
	{
	public:
		MoneyShow(void)
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
		~MoneyShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MoneyShow::typeid));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(682, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 67);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(263, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 430);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
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
			case 11:this->pictureBox1->Load("11-pentacles-1page");
				break;
			case 12:this->pictureBox1->Load("12-pentacles-2knight");
				break;
			case 13:this->pictureBox1->Load("13-pentacles-3queen");
				break;
			case 14:this->pictureBox1->Load("14-pentacles-4king");
				break;
			default: break;
			}
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(927, 41);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(350, 430);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;

			if (num == 1)
				this->pictureBox2->Load("show_major0.png");
			else if (num == 2)
				this->pictureBox2->Load("show_major1.jpg");
			else if (num == 3)
				this->pictureBox2->Load("show_major02.jpg");
			else if (num == 4)
				this->pictureBox2->Load("show_major03.jpg");
			else if (num == 5)
				this->pictureBox2->Load("show_major04.jpg");
			else if (num == 6)
				this->pictureBox2->Load("show_major05.jpg");
			else if (num == 7)
				this->pictureBox2->Load("show_major06.jpg");
			else if (num == 8)
				this->pictureBox2->Load("show_major07.jpg");
			else if (num == 9)
				this->pictureBox2->Load("show_major08.jpg");
			else if (num == 10)
				this->pictureBox2->Load("show_major09.jpg");
			else if (num == 11)
				this->pictureBox2->Load("show_major10.jpg");
			else if (num == 12)
				this->pictureBox2->Load("show_major11.jpg");
			else if (num == 13)
				this->pictureBox2->Load("show_major12.jpg");
			else if (num == 14)
				this->pictureBox2->Load("show_major13.jpg");
			else if (num == 15)
				this->pictureBox2->Load("show_major14.jpg");
			else if (num == 16)
				this->pictureBox2->Load("show_major15.jpg");
			else if (num == 17)
				this->pictureBox2->Load("show_major16.jpg");
			else if (num == 18)
				this->pictureBox2->Load("show_major17.jpg");
			else if (num == 19)
				this->pictureBox2->Load("show_major18.jpg");
			else if (num == 20)
				this->pictureBox2->Load("show_major19.jpg");
			else if (num == 21)
				this->pictureBox2->Load("show_major20.jpg");
			else if (num == 22)
				this->pictureBox2->Load("show_major21.jpg");
			// 
			// MoneyShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1421, 593);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"MoneyShow";
			this->Text = L"MoneyShow";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
};
}
