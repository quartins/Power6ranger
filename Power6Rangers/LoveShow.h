#pragma once

namespace Power6Rangers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoveShow
	/// </summary>
	public ref class LoveShow : public System::Windows::Forms::Form
	{
	public:
		LoveShow(void)
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
		~LoveShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoveShow::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::LightPink;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1251, 964);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoveShow::Button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(109, 193);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(560, 692);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			int num;
			Random^ random = gcnew Random;
			num = random->Next(1, 14);
			switch (num)
			{
			case 1:this->pictureBox1->Load("1page-cups.png");
				break;
			case 2:this->pictureBox1->Load("2knight-cups.png");
				break;
			case 3:this->pictureBox1->Load("3queen-cups.png");
				break;
			case 4:this->pictureBox1->Load("4king-cups.png");
				break;
			case 5:this->pictureBox1->Load("01-cups.png");
				break;
			case 6:this->pictureBox1->Load("02-cups.png");
				break;
			case 7:this->pictureBox1->Load("03-cups.png");
				break;
			case 8:this->pictureBox1->Load("04-cups.png");
				break;
			case 9:this->pictureBox1->Load("05-cups.png");
				break;
			case 10:this->pictureBox1->Load("06-cups.png");
				break;
			case 11:this->pictureBox1->Load("07-cups.png");
				break;
			case 12:this->pictureBox1->Load("08-cups.png");
				break;
			case 13:this->pictureBox1->Load("09-cups.png");
				break;
			case 14:this->pictureBox1->Load("10-cups.png");
				break;
			default: break;
			}
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Location = System::Drawing::Point(826, 193);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(553, 692);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			if (num == 1)
				this->pictureBox2->Load("show_cups11.png");
			else if (num == 2)
				this->pictureBox2->Load("show_cups12.png");
			else if (num == 3)
				this->pictureBox2->Load("show_cups13.png");
			else if (num == 4)
				this->pictureBox2->Load("show_cups14.png");
			else if (num == 5)
				this->pictureBox2->Load("show_cups01.png");
			else if (num == 6)
				this->pictureBox2->Load("show_cups02.png");
			else if (num == 7)
				this->pictureBox2->Load("show_cups03.png");
			else if (num == 8)
				this->pictureBox2->Load("show_cups04.png");
			else if (num == 9)
				this->pictureBox2->Load("show_cups05.png");
			else if (num == 10)
				this->pictureBox2->Load("show_cups06.png");
			else if (num == 11)
				this->pictureBox2->Load("show_cups07.png");
			else if (num == 12)
				this->pictureBox2->Load("show_cups08.png");
			else if (num == 13)
				this->pictureBox2->Load("show_cups09.png");
			else if (num == 14)
				this->pictureBox2->Load("show_cups10.png");

			// 
			// LoveShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1433, 1055);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"LoveShow";
			this->Text = L"LoveShow";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
