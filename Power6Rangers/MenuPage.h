#pragma once
#include "DailyRand.h"
#include "LoveRand.h"
#include "MoneyRand.h"
#include "WorkRand.h"

namespace Power6Rangers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPage
	/// </summary>
	public ref class MenuPage : public System::Windows::Forms::Form
	{
	public:
		MenuPage(void)
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
		~MenuPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPage::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Swis721 Blk BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
<<<<<<< HEAD
			this->button1->Location = System::Drawing::Point(368, 72);
			this->button1->Margin = System::Windows::Forms::Padding(2);
=======
			this->button1->Location = System::Drawing::Point(552, 112);
>>>>>>> 0c92560e3350b7509f1e4b6dcc2562be8b9fd574
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 128);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Daily";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuPage::Button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
<<<<<<< HEAD
			this->button2->Font = (gcnew System::Drawing::Font(L"Swis721 Blk BT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(368, 164);
			this->button2->Margin = System::Windows::Forms::Padding(2);
=======
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button2->Location = System::Drawing::Point(552, 256);
>>>>>>> 0c92560e3350b7509f1e4b6dcc2562be8b9fd574
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 128);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Love";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuPage::Button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
<<<<<<< HEAD
			this->button3->Font = (gcnew System::Drawing::Font(L"Swis721 Blk BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(368, 256);
			this->button3->Margin = System::Windows::Forms::Padding(2);
=======
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button3->Location = System::Drawing::Point(552, 400);
>>>>>>> 0c92560e3350b7509f1e4b6dcc2562be8b9fd574
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(328, 128);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Money";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuPage::Button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
<<<<<<< HEAD
			this->button4->Font = (gcnew System::Drawing::Font(L"Swis721 Blk BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(368, 348);
			this->button4->Margin = System::Windows::Forms::Padding(2);
=======
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->button4->Location = System::Drawing::Point(552, 544);
>>>>>>> 0c92560e3350b7509f1e4b6dcc2562be8b9fd574
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(328, 128);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Work";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuPage::Button4_Click);
			// 
			// MenuPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1449, 845);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
<<<<<<< HEAD
			this->Margin = System::Windows::Forms::Padding(2);
=======
>>>>>>> 0c92560e3350b7509f1e4b6dcc2562be8b9fd574
			this->Name = L"MenuPage";
			this->Text = L"MenuPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DailyRand^ ToDaily = gcnew DailyRand;
		ToDaily->Show();
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		LoveRand^ ToLove = gcnew LoveRand;
		ToLove->Show();
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MoneyRand^ ToMoney = gcnew MoneyRand;
		ToMoney->Show();
	}
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		WorkRand^ ToWork = gcnew WorkRand;
		ToWork->Show();
	}

};
}
