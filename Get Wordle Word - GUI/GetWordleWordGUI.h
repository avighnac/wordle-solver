#pragma once

#include <string>
#include <vector>
#include <fstream>

namespace GetWordleWordGUI {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

std::vector<std::string> englishWords;

static std::string to_standard_string(System::String ^ string) {
  using System::Runtime::InteropServices::Marshal;
  System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
  char *charPointer = reinterpret_cast<char *>(pointer.ToPointer());
  std::string returnString(charPointer, string->Length);
  Marshal::FreeHGlobal(pointer);

  return returnString;
}

std::string include, exclude, correctPositions, incorrectPositions;

/// <summary>
/// Summary for GetWordleWordGUI
/// </summary>
public
ref class GetWordleWordGUI : public System::Windows::Forms::Form {
public:
  GetWordleWordGUI(void) { InitializeComponent(); }

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~GetWordleWordGUI() {
    if (components) {
      delete components;
    }
    englishWords.clear();
  }

private:
  System::Windows::Forms::Label ^ label1;

private:
private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::RichTextBox ^ includeTextBox;

private:
private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::RichTextBox ^ excludeTextBox;

private:
private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::RichTextBox ^ correctPositionsTextBox;

private:
private:
  System::Windows::Forms::Label ^ label5;

private:
  System::Windows::Forms::RichTextBox ^ incorrectPositionsTextBox;

private:
private:
  System::Windows::Forms::RichTextBox ^ bestGuessesTextBox;

private:
  System::Windows::Forms::Label ^ wordFileFound;

private:
private:
private:
private:
private:
protected:
private:
  /// <summary>
  /// Required designer variable.
  /// </summary>
  System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
  /// <summary>
  /// Required method for Designer support - do not modify
  /// the contents of this method with the code editor.
  /// </summary>
  void InitializeComponent(void) {
    System::ComponentModel::ComponentResourceManager ^ resources =
        (gcnew System::ComponentModel::ComponentResourceManager(
            GetWordleWordGUI::typeid));
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->includeTextBox = (gcnew System::Windows::Forms::RichTextBox());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->excludeTextBox = (gcnew System::Windows::Forms::RichTextBox());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->correctPositionsTextBox =
        (gcnew System::Windows::Forms::RichTextBox());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->incorrectPositionsTextBox =
        (gcnew System::Windows::Forms::RichTextBox());
    this->bestGuessesTextBox = (gcnew System::Windows::Forms::RichTextBox());
    this->wordFileFound = (gcnew System::Windows::Forms::Label());
    this->SuspendLayout();
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label1->ForeColor = System::Drawing::Color::White;
    this->label1->Location = System::Drawing::Point(12, 64);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(110, 16);
    this->label1->TabIndex = 0;
    this->label1->Text = L"Letters to include:";
    this->label1->Click +=
        gcnew System::EventHandler(this, &GetWordleWordGUI::label1_Click);
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label2->ForeColor = System::Drawing::Color::White;
    this->label2->Location = System::Drawing::Point(413, 50);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(91, 16);
    this->label2->TabIndex = 2;
    this->label2->Text = L"Best Guesses";
    this->label2->Click +=
        gcnew System::EventHandler(this, &GetWordleWordGUI::label2_Click);
    //
    // includeTextBox
    //
    this->includeTextBox->BackColor = System::Drawing::Color::FromArgb(
        static_cast<System::Int32>(static_cast<System::Byte>(83)),
        static_cast<System::Int32>(static_cast<System::Byte>(141)),
        static_cast<System::Int32>(static_cast<System::Byte>(78)));
    this->includeTextBox->BorderStyle =
        System::Windows::Forms::BorderStyle::None;
    this->includeTextBox->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->includeTextBox->ForeColor = System::Drawing::SystemColors::Window;
    this->includeTextBox->Location = System::Drawing::Point(15, 83);
    this->includeTextBox->Name = L"includeTextBox";
    this->includeTextBox->Size = System::Drawing::Size(241, 25);
    this->includeTextBox->TabIndex = 3;
    this->includeTextBox->Text = L"";
    this->includeTextBox->TextChanged += gcnew System::EventHandler(
        this, &GetWordleWordGUI::includeTextBox_TextChanged_1);
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label3->ForeColor = System::Drawing::Color::White;
    this->label3->Location = System::Drawing::Point(12, 122);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(114, 16);
    this->label3->TabIndex = 4;
    this->label3->Text = L"Letters to exclude:";
    this->label3->Click +=
        gcnew System::EventHandler(this, &GetWordleWordGUI::label3_Click);
    //
    // excludeTextBox
    //
    this->excludeTextBox->BackColor = System::Drawing::Color::FromArgb(
        static_cast<System::Int32>(static_cast<System::Byte>(58)),
        static_cast<System::Int32>(static_cast<System::Byte>(58)),
        static_cast<System::Int32>(static_cast<System::Byte>(60)));
    this->excludeTextBox->BorderStyle =
        System::Windows::Forms::BorderStyle::None;
    this->excludeTextBox->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->excludeTextBox->ForeColor = System::Drawing::Color::White;
    this->excludeTextBox->Location = System::Drawing::Point(15, 141);
    this->excludeTextBox->Name = L"excludeTextBox";
    this->excludeTextBox->Size = System::Drawing::Size(241, 25);
    this->excludeTextBox->TabIndex = 5;
    this->excludeTextBox->Text = L"";
    this->excludeTextBox->TextChanged += gcnew System::EventHandler(
        this, &GetWordleWordGUI::excludeTextBox_TextChanged);
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label4->ForeColor = System::Drawing::Color::White;
    this->label4->Location = System::Drawing::Point(15, 187);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(192, 16);
    this->label4->TabIndex = 6;
    this->label4->Text = L"Letters in their correct positions:";
    //
    // correctPositionsTextBox
    //
    this->correctPositionsTextBox->BackColor = System::Drawing::Color::FromArgb(
        static_cast<System::Int32>(static_cast<System::Byte>(83)),
        static_cast<System::Int32>(static_cast<System::Byte>(141)),
        static_cast<System::Int32>(static_cast<System::Byte>(78)));
    this->correctPositionsTextBox->BorderStyle =
        System::Windows::Forms::BorderStyle::None;
    this->correctPositionsTextBox->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->correctPositionsTextBox->ForeColor = System::Drawing::Color::White;
    this->correctPositionsTextBox->Location = System::Drawing::Point(15, 206);
    this->correctPositionsTextBox->MaxLength = 5;
    this->correctPositionsTextBox->Name = L"correctPositionsTextBox";
    this->correctPositionsTextBox->Size = System::Drawing::Size(241, 25);
    this->correctPositionsTextBox->TabIndex = 7;
    this->correctPositionsTextBox->Text = L"";
    this->correctPositionsTextBox->TextChanged += gcnew System::EventHandler(
        this, &GetWordleWordGUI::correctPositionsTextBox_TextChanged);
    //
    // label5
    //
    this->label5->AutoSize = true;
    this->label5->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->label5->ForeColor = System::Drawing::Color::White;
    this->label5->Location = System::Drawing::Point(15, 245);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(202, 16);
    this->label5->TabIndex = 8;
    this->label5->Text = L"Letters in their incorrect positions:";
    //
    // incorrectPositionsTextBox
    //
    this->incorrectPositionsTextBox->BackColor =
        System::Drawing::Color::FromArgb(
            static_cast<System::Int32>(static_cast<System::Byte>(181)),
            static_cast<System::Int32>(static_cast<System::Byte>(159)),
            static_cast<System::Int32>(static_cast<System::Byte>(59)));
    this->incorrectPositionsTextBox->BorderStyle =
        System::Windows::Forms::BorderStyle::None;
    this->incorrectPositionsTextBox->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->incorrectPositionsTextBox->ForeColor = System::Drawing::Color::White;
    this->incorrectPositionsTextBox->Location = System::Drawing::Point(15, 264);
    this->incorrectPositionsTextBox->MaxLength = 5;
    this->incorrectPositionsTextBox->Name = L"incorrectPositionsTextBox";
    this->incorrectPositionsTextBox->Size = System::Drawing::Size(241, 25);
    this->incorrectPositionsTextBox->TabIndex = 9;
    this->incorrectPositionsTextBox->Text = L"";
    this->incorrectPositionsTextBox->TextChanged += gcnew System::EventHandler(
        this, &GetWordleWordGUI::incorrectPositionsTextBox_TextChanged);
    //
    // bestGuessesTextBox
    //
    this->bestGuessesTextBox->BackColor = System::Drawing::Color::FromArgb(
        static_cast<System::Int32>(static_cast<System::Byte>(18)),
        static_cast<System::Int32>(static_cast<System::Byte>(18)),
        static_cast<System::Int32>(static_cast<System::Byte>(19)));
    this->bestGuessesTextBox->BorderStyle =
        System::Windows::Forms::BorderStyle::None;
    this->bestGuessesTextBox->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    this->bestGuessesTextBox->ForeColor = System::Drawing::Color::White;
    this->bestGuessesTextBox->Location = System::Drawing::Point(308, 73);
    this->bestGuessesTextBox->Name = L"bestGuessesTextBox";
    this->bestGuessesTextBox->Size = System::Drawing::Size(285, 228);
    this->bestGuessesTextBox->TabIndex = 10;
    this->bestGuessesTextBox->Text = L"";
    this->bestGuessesTextBox->TextChanged += gcnew System::EventHandler(
        this, &GetWordleWordGUI::bestGuessesTextBox_TextChanged);
    //
    // wordFileFound
    //
    this->wordFileFound->AutoSize = true;
    this->wordFileFound->ForeColor = System::Drawing::Color::Red;
    this->wordFileFound->Location = System::Drawing::Point(71, 9);
    this->wordFileFound->Name = L"wordFileFound";
    this->wordFileFound->Size = System::Drawing::Size(0, 16);
    this->wordFileFound->TabIndex = 11;
    this->wordFileFound->Click +=
        gcnew System::EventHandler(this, &GetWordleWordGUI::label6_Click);
    //
    // GetWordleWordGUI
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackColor = System::Drawing::Color::FromArgb(
        static_cast<System::Int32>(static_cast<System::Byte>(18)),
        static_cast<System::Int32>(static_cast<System::Byte>(18)),
        static_cast<System::Int32>(static_cast<System::Byte>(19)));
    this->ClientSize = System::Drawing::Size(612, 313);
    this->Controls->Add(this->wordFileFound);
    this->Controls->Add(this->bestGuessesTextBox);
    this->Controls->Add(this->incorrectPositionsTextBox);
    this->Controls->Add(this->label5);
    this->Controls->Add(this->correctPositionsTextBox);
    this->Controls->Add(this->label4);
    this->Controls->Add(this->excludeTextBox);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->includeTextBox);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->label1);
    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(
        resources->GetObject(L"$this.Icon")));
    this->Name = L"GetWordleWordGUI";
    this->Text = L"Wordle Solver";
    this->Load += gcnew System::EventHandler(
        this, &GetWordleWordGUI::GetWordleWordGUI_Resize);
    this->ResizeEnd += gcnew System::EventHandler(
        this, &GetWordleWordGUI::GetWordleWordGUI_Resize);
    this->Resize += gcnew System::EventHandler(
        this, &GetWordleWordGUI::GetWordleWordGUI_Resize);
    this->ResumeLayout(false);
    this->PerformLayout();
  }

  static std::string get_guesses(std::string include, std::string exclude,
                                 std::string correctPositions,
                                 std::string incorrectPositions) {
    if (englishWords.empty()) {
      std::ifstream wordle_words("englishWords.dat");
      std::string word;
      while (wordle_words >> word)
        englishWords.push_back(word);
      wordle_words.close();
    }

    if (correctPositions.empty())
      correctPositions = ".....";
    if (incorrectPositions.empty())
      incorrectPositions = ".....";

    while (correctPositions.length() < 5)
      correctPositions.push_back('.');
    while (incorrectPositions.length() < 5)
      incorrectPositions.push_back('.');

    std::string answer;
    for (auto &i : englishWords) {
      bool hasAllIncludedLetters = true;
      for (auto &charac : include)
        if (i.find(charac) == std::string::npos)
          hasAllIncludedLetters = false;
      bool doesNotHaveAllExcludedLetters = true;
      for (auto &charac : exclude)
        if (i.find(charac) != std::string::npos)
          doesNotHaveAllExcludedLetters = false;

      bool isInCorrectPositions = true;
      for (auto pos = 0; pos < i.length(); pos++)
        if (correctPositions.substr(pos, 1) != ".")
          if (correctPositions.substr(pos, 1) != i.substr(pos, 1))
            isInCorrectPositions = false;

      bool noIncorrectPositions = true;
      for (auto pos = 0; pos < i.length(); pos++)
        if (incorrectPositions.substr(pos, 1) != ".")
          if (incorrectPositions.substr(pos, 1) == i.substr(pos, 1))
            noIncorrectPositions = false;

      if (hasAllIncludedLetters && doesNotHaveAllExcludedLetters &&
          isInCorrectPositions && noIncorrectPositions)
        answer += i + "\n";
    }
    return answer;
  }

#pragma endregion
private:
  System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:


private:
  System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e) {
    bestGuessesTextBox->Text = gcnew String(
        get_guesses(include, exclude, correctPositions, incorrectPositions)
            .data());
  }

private:


private:


private:
  System::Void label3_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void includeTextBox_TextChanged_1(System::Object ^ sender,
                                            System::EventArgs ^ e) {
    include = to_standard_string(includeTextBox->Text);
    if (englishWords.empty()) {
      std::ifstream wordle_words("englishWords.dat");
      if (wordle_words.fail())
        wordFileFound->Text =
            "Error: 'englishWords.dat' cannot be found in the same "
            "directory as this exe file.";
      else
        wordFileFound->Text = "";
    }
    bestGuessesTextBox->Text = gcnew String(
        get_guesses(include, exclude, correctPositions, incorrectPositions)
            .data());
  }

private:
  System::Void excludeTextBox_TextChanged(System::Object ^ sender,
                                          System::EventArgs ^ e) {
    exclude = to_standard_string(excludeTextBox->Text);
    if (englishWords.empty()) {
      std::ifstream wordle_words("englishWords.dat");
      if (wordle_words.fail())
        wordFileFound->Text =
            "Error: 'englishWords.dat' cannot be found in the same "
            "directory as this exe file.";
      else
        wordFileFound->Text = "";
    }
    bestGuessesTextBox->Text = gcnew String(
        get_guesses(include, exclude, correctPositions, incorrectPositions)
            .data());
  }

private:
  System::Void correctPositionsTextBox_TextChanged(System::Object ^ sender,
                                                   System::EventArgs ^ e) {
    correctPositions = to_standard_string(correctPositionsTextBox->Text);
    if (englishWords.empty()) {
      std::ifstream wordle_words("englishWords.dat");
      if (wordle_words.fail())
        wordFileFound->Text =
            "Error: 'englishWords.dat' cannot be found in the same "
            "directory as this exe file.";
      else
        wordFileFound->Text = "";
    }
    bestGuessesTextBox->Text = gcnew String(
        get_guesses(include, exclude, correctPositions, incorrectPositions)
            .data());
  }

private:
  System::Void incorrectPositionsTextBox_TextChanged(System::Object ^ sender,
                                                     System::EventArgs ^ e) {
    incorrectPositions = to_standard_string(incorrectPositionsTextBox->Text);
    if (englishWords.empty()) {
      std::ifstream wordle_words("englishWords.dat");
      if (wordle_words.fail())
        wordFileFound->Text = "Error: 'englishWords.dat' cannot be found in the same "
                              "directory as this exe file.";
      else
        wordFileFound->Text = "";
    }
    bestGuessesTextBox->Text = gcnew String(
        get_guesses(include, exclude, correctPositions, incorrectPositions)
            .data());
  }

private:
  System::Void bestGuessesTextBox_TextChanged(System::Object ^ sender,
                                              System::EventArgs ^ e) {}

private:
  System::Void label6_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void GetWordleWordGUI_Load(System::Object ^ sender,
                                     System::EventArgs ^ e) {}

private:
  System::Void GetWordleWordGUI_Resize(System::Object ^ sender,
                                          System::EventArgs ^ e) {
    includeTextBox->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 15 / 630, GetWordleWordGUI::Size.Height * 83 / 360);
    includeTextBox->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 241 / 630,
                              GetWordleWordGUI::Size.Height * 25 / 360);

    excludeTextBox->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 15 / 630,
                               GetWordleWordGUI::Size.Height * 141 / 360);
    excludeTextBox->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 241 / 630,
                              GetWordleWordGUI::Size.Height * 25 / 360);

    correctPositionsTextBox->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 15 / 630,
                               GetWordleWordGUI::Size.Height * 206 / 360);
    correctPositionsTextBox->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 241 / 630,
                              GetWordleWordGUI::Size.Height * 25 / 360);

    incorrectPositionsTextBox->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 15 / 630,
                               GetWordleWordGUI::Size.Height * 264 / 360);
    incorrectPositionsTextBox->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 241 / 630,
                              GetWordleWordGUI::Size.Height * 25 / 360);

    bestGuessesTextBox->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 308 / 630,
                               GetWordleWordGUI::Size.Height * 73 / 360);
    bestGuessesTextBox->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 285 / 630,
                              GetWordleWordGUI::Size.Height * 228 / 360);


    label1->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif",
        (GetWordleWordGUI::Size.Width + GetWordleWordGUI::Size.Height) * 7.8 /
            990,
        System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    label2->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif", (GetWordleWordGUI::Size.Width + GetWordleWordGUI::Size.Height) * 7.8 / 990, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    label3->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif",
        (GetWordleWordGUI::Size.Width + GetWordleWordGUI::Size.Height) * 7.8 /
            990,
        System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    label4->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif",
        (GetWordleWordGUI::Size.Width + GetWordleWordGUI::Size.Height) * 7.8 /
            990,
        System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
    label5->Font = (gcnew System::Drawing::Font(
        L"Microsoft Sans Serif",
        (GetWordleWordGUI::Size.Width + GetWordleWordGUI::Size.Height) * 7.8 /
            990,
        System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));

    label1->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 12 / 630,
                               GetWordleWordGUI::Size.Height * 64 / 360);
    label1->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 110 / 630,
                              GetWordleWordGUI::Size.Height * 16 / 360);

    label2->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 413 / 630,
                               GetWordleWordGUI::Size.Height * 50 / 360);
    label2->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 91 / 630,
                              GetWordleWordGUI::Size.Height * 16 / 360);

    label3->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 12 / 630,
                               GetWordleWordGUI::Size.Height * 122 / 360);
    label3->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 114 / 630,
                              GetWordleWordGUI::Size.Height * 16 / 360);

    label4->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 15 / 630,
                               GetWordleWordGUI::Size.Height * 187 / 360);
    label4->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 192 / 630,
                              GetWordleWordGUI::Size.Height * 16 / 360);

    label5->Location =
        System::Drawing::Point(GetWordleWordGUI::Size.Width * 15 / 630,
                               GetWordleWordGUI::Size.Height * 245 / 360);
    label5->Size =
        System::Drawing::Size(GetWordleWordGUI::Size.Width * 202 / 630,
                              GetWordleWordGUI::Size.Height * 16 / 360);
  }
};
} // namespace GetWordleWordGUI