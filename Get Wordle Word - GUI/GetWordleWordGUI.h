#pragma once

namespace GetWordleWordGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GetWordleWordGUI
	/// </summary>
	public ref class GetWordleWordGUI : public System::Windows::Forms::Form
	{
	public:
		GetWordleWordGUI(void)
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
		~GetWordleWordGUI()
		{
			if (components)
			{
				delete components;
			}
		}

              private:
                System::Windows::Forms::Label ^ label1;

              private:


              private:
                System::Windows::Forms::Label ^ label2;

              private:
                System::Windows::Forms::RichTextBox ^ richTextBox1;

              private:
                System::Windows::Forms::Label ^ label3;

              private:
                System::Windows::Forms::RichTextBox ^ richTextBox2;

              private:
                System::Windows::Forms::Label ^ label4;

              private:
                System::Windows::Forms::RichTextBox ^ richTextBox3;

              private:
                System::Windows::Forms::Label ^ label5;

              private:
                System::Windows::Forms::RichTextBox ^ richTextBox4;

              private:
                System::Windows::Forms::RichTextBox ^ richTextBox5;

              private:


              private:


              private:


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
                  this->label1 = (gcnew System::Windows::Forms::Label());
                  this->label2 = (gcnew System::Windows::Forms::Label());
                  this->richTextBox1 =
                      (gcnew System::Windows::Forms::RichTextBox());
                  this->label3 = (gcnew System::Windows::Forms::Label());
                  this->richTextBox2 =
                      (gcnew System::Windows::Forms::RichTextBox());
                  this->label4 = (gcnew System::Windows::Forms::Label());
                  this->richTextBox3 =
                      (gcnew System::Windows::Forms::RichTextBox());
                  this->label5 = (gcnew System::Windows::Forms::Label());
                  this->richTextBox4 =
                      (gcnew System::Windows::Forms::RichTextBox());
                  this->richTextBox5 =
                      (gcnew System::Windows::Forms::RichTextBox());
                  this->SuspendLayout();
                  //
                  // label1
                  //
                  this->label1->AutoSize = true;
                  this->label1->Location = System::Drawing::Point(12, 50);
                  this->label1->Name = L"label1";
                  this->label1->Size = System::Drawing::Size(110, 16);
                  this->label1->TabIndex = 0;
                  this->label1->Text = L"Letters to include:";
                  this->label1->Click += gcnew System::EventHandler(
                      this, &GetWordleWordGUI::label1_Click);
                  //
                  // label2
                  //
                  this->label2->AutoSize = true;
                  this->label2->Location = System::Drawing::Point(413, 50);
                  this->label2->Name = L"label2";
                  this->label2->Size = System::Drawing::Size(91, 16);
                  this->label2->TabIndex = 2;
                  this->label2->Text = L"Best Guesses";
                  this->label2->Click += gcnew System::EventHandler(
                      this, &GetWordleWordGUI::label2_Click);
                  //
                  // richTextBox1
                  //
                  this->richTextBox1->Location = System::Drawing::Point(15, 69);
                  this->richTextBox1->Name = L"richTextBox1";
                  this->richTextBox1->Size = System::Drawing::Size(241, 25);
                  this->richTextBox1->TabIndex = 3;
                  this->richTextBox1->Text = L"";
                  //
                  // label3
                  //
                  this->label3->AutoSize = true;
                  this->label3->Location = System::Drawing::Point(12, 122);
                  this->label3->Name = L"label3";
                  this->label3->Size = System::Drawing::Size(114, 16);
                  this->label3->TabIndex = 4;
                  this->label3->Text = L"Letters to exclude:";
                  this->label3->Click += gcnew System::EventHandler(
                      this, &GetWordleWordGUI::label3_Click);
                  //
                  // richTextBox2
                  //
                  this->richTextBox2->Location =
                      System::Drawing::Point(15, 141);
                  this->richTextBox2->Name = L"richTextBox2";
                  this->richTextBox2->Size = System::Drawing::Size(241, 25);
                  this->richTextBox2->TabIndex = 5;
                  this->richTextBox2->Text = L"";
                  //
                  // label4
                  //
                  this->label4->AutoSize = true;
                  this->label4->Location = System::Drawing::Point(15, 187);
                  this->label4->Name = L"label4";
                  this->label4->Size = System::Drawing::Size(192, 16);
                  this->label4->TabIndex = 6;
                  this->label4->Text = L"Letters in their correct positions:";
                  //
                  // richTextBox3
                  //
                  this->richTextBox3->Location =
                      System::Drawing::Point(15, 206);
                  this->richTextBox3->Name = L"richTextBox3";
                  this->richTextBox3->Size = System::Drawing::Size(241, 25);
                  this->richTextBox3->TabIndex = 7;
                  this->richTextBox3->Text = L"";
                  //
                  // label5
                  //
                  this->label5->AutoSize = true;
                  this->label5->Location = System::Drawing::Point(15, 245);
                  this->label5->Name = L"label5";
                  this->label5->Size = System::Drawing::Size(202, 16);
                  this->label5->TabIndex = 8;
                  this->label5->Text = L"Letters in their incorrect positions:";
                  //
                  // richTextBox4
                  //
                  this->richTextBox4->Location =
                      System::Drawing::Point(15, 264);
                  this->richTextBox4->Name = L"richTextBox4";
                  this->richTextBox4->Size = System::Drawing::Size(241, 25);
                  this->richTextBox4->TabIndex = 9;
                  this->richTextBox4->Text = L"";
                  //
                  // richTextBox5
                  //
                  this->richTextBox5->Location =
                      System::Drawing::Point(308, 73);
                  this->richTextBox5->Name = L"richTextBox5";
                  this->richTextBox5->Size = System::Drawing::Size(285, 228);
                  this->richTextBox5->TabIndex = 10;
                  this->richTextBox5->Text = L"";
                  //
                  // GetWordleWordGUI
                  //
                  this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
                  this->AutoScaleMode =
                      System::Windows::Forms::AutoScaleMode::Font;
                  this->ClientSize = System::Drawing::Size(609, 312);
                  this->Controls->Add(this->richTextBox5);
                  this->Controls->Add(this->richTextBox4);
                  this->Controls->Add(this->label5);
                  this->Controls->Add(this->richTextBox3);
                  this->Controls->Add(this->label4);
                  this->Controls->Add(this->richTextBox2);
                  this->Controls->Add(this->label3);
                  this->Controls->Add(this->richTextBox1);
                  this->Controls->Add(this->label2);
                  this->Controls->Add(this->label1);
                  this->Name = L"GetWordleWordGUI";
                  this->Text = L"Get Wordle Word";
                  this->ResumeLayout(false);
                  this->PerformLayout();
                }
#pragma endregion
              private:
                System::Void label1_Click(System::Object ^ sender,
                                          System::EventArgs ^ e) {}

              private:
                System::Void richTextBox1_TextChanged(System::Object ^ sender,
                                                      System::EventArgs ^ e) {}

              private:
                System::Void label2_Click(System::Object ^ sender,
                                          System::EventArgs ^ e) {}

              private:
                System::Void pictureBox1_Click(System::Object ^ sender,
                                               System::EventArgs ^ e) {}

              private:
                System::Void buttonA_Click(System::Object ^ sender,
                                           System::EventArgs ^ e) {}

              private:
                System::Void label3_Click(System::Object ^ sender,
                                          System::EventArgs ^ e) {}
          };
          }
