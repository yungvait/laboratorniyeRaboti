#pragma once

namespace Калькулятор {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






















	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog4;



	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBoxKONEC;
	private: System::Windows::Forms::TextBox^ textBoxNACHALNOE;
	private: System::Windows::Forms::TextBox^ textBoxSHAGI;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonKONEC;
	private: System::Windows::Forms::Button^ buttonNACHALNOE;
	private: System::Windows::Forms::Button^ buttonSHAGI;
	private: System::Windows::Forms::Button^ buttonEXIT;
	private: System::Windows::Forms::Button^ buttonOCHISTKA;
	private: System::Windows::Forms::Button^ buttonZAPUSK;
	private: System::Windows::Forms::Button^ buttonSOHRANENIYE;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::Button^ button2;












	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxKONEC = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNACHALNOE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSHAGI = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonKONEC = (gcnew System::Windows::Forms::Button());
			this->buttonNACHALNOE = (gcnew System::Windows::Forms::Button());
			this->buttonSHAGI = (gcnew System::Windows::Forms::Button());
			this->buttonEXIT = (gcnew System::Windows::Forms::Button());
			this->buttonOCHISTKA = (gcnew System::Windows::Forms::Button());
			this->buttonZAPUSK = (gcnew System::Windows::Forms::Button());
			this->buttonSOHRANENIYE = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// openFileDialog4
			// 
			this->openFileDialog4->FileName = L"openFileDialog4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Начало интервала";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Конец интервала";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Начальное значение";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Количество шагов";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(355, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Результат";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(47, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBoxKONEC
			// 
			this->textBoxKONEC->Location = System::Drawing::Point(15, 59);
			this->textBoxKONEC->Name = L"textBoxKONEC";
			this->textBoxKONEC->Size = System::Drawing::Size(47, 20);
			this->textBoxKONEC->TabIndex = 6;
			// 
			// textBoxNACHALNOE
			// 
			this->textBoxNACHALNOE->Location = System::Drawing::Point(15, 98);
			this->textBoxNACHALNOE->Name = L"textBoxNACHALNOE";
			this->textBoxNACHALNOE->Size = System::Drawing::Size(47, 20);
			this->textBoxNACHALNOE->TabIndex = 7;
			// 
			// textBoxSHAGI
			// 
			this->textBoxSHAGI->Location = System::Drawing::Point(15, 137);
			this->textBoxSHAGI->Name = L"textBoxSHAGI";
			this->textBoxSHAGI->Size = System::Drawing::Size(47, 20);
			this->textBoxSHAGI->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 20);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonNACHALO_Click);
			// 
			// buttonKONEC
			// 
			this->buttonKONEC->Location = System::Drawing::Point(68, 58);
			this->buttonKONEC->Name = L"buttonKONEC";
			this->buttonKONEC->Size = System::Drawing::Size(82, 20);
			this->buttonKONEC->TabIndex = 11;
			this->buttonKONEC->Text = L"Файл";
			this->buttonKONEC->UseVisualStyleBackColor = true;
			this->buttonKONEC->Click += gcnew System::EventHandler(this, &MyForm::buttonKONEC_Click);
			// 
			// buttonNACHALNOE
			// 
			this->buttonNACHALNOE->Location = System::Drawing::Point(68, 98);
			this->buttonNACHALNOE->Name = L"buttonNACHALNOE";
			this->buttonNACHALNOE->Size = System::Drawing::Size(82, 20);
			this->buttonNACHALNOE->TabIndex = 12;
			this->buttonNACHALNOE->Text = L"Файл";
			this->buttonNACHALNOE->UseVisualStyleBackColor = true;
			this->buttonNACHALNOE->Click += gcnew System::EventHandler(this, &MyForm::buttonNACHALNOE_Click);
			// 
			// buttonSHAGI
			// 
			this->buttonSHAGI->Location = System::Drawing::Point(68, 137);
			this->buttonSHAGI->Name = L"buttonSHAGI";
			this->buttonSHAGI->Size = System::Drawing::Size(82, 20);
			this->buttonSHAGI->TabIndex = 13;
			this->buttonSHAGI->Text = L"Файл";
			this->buttonSHAGI->UseVisualStyleBackColor = true;
			this->buttonSHAGI->Click += gcnew System::EventHandler(this, &MyForm::buttonSHAGI_Click);
			// 
			// buttonEXIT
			// 
			this->buttonEXIT->Location = System::Drawing::Point(500, 251);
			this->buttonEXIT->Name = L"buttonEXIT";
			this->buttonEXIT->Size = System::Drawing::Size(86, 25);
			this->buttonEXIT->TabIndex = 14;
			this->buttonEXIT->Text = L"Выход";
			this->buttonEXIT->UseVisualStyleBackColor = true;
			this->buttonEXIT->Click += gcnew System::EventHandler(this, &MyForm::buttonEXIT_Click);
			// 
			// buttonOCHISTKA
			// 
			this->buttonOCHISTKA->Location = System::Drawing::Point(15, 225);
			this->buttonOCHISTKA->Name = L"buttonOCHISTKA";
			this->buttonOCHISTKA->Size = System::Drawing::Size(135, 25);
			this->buttonOCHISTKA->TabIndex = 15;
			this->buttonOCHISTKA->Text = L"Очистить поля";
			this->buttonOCHISTKA->UseVisualStyleBackColor = true;
			this->buttonOCHISTKA->Click += gcnew System::EventHandler(this, &MyForm::buttonOCHISTKA_Click);
			// 
			// buttonZAPUSK
			// 
			this->buttonZAPUSK->Location = System::Drawing::Point(15, 163);
			this->buttonZAPUSK->Name = L"buttonZAPUSK";
			this->buttonZAPUSK->Size = System::Drawing::Size(135, 25);
			this->buttonZAPUSK->TabIndex = 16;
			this->buttonZAPUSK->Text = L"Построение графика";
			this->buttonZAPUSK->UseVisualStyleBackColor = true;
			this->buttonZAPUSK->Click += gcnew System::EventHandler(this, &MyForm::buttonZAPUSK_Click);
			// 
			// buttonSOHRANENIYE
			// 
			this->buttonSOHRANENIYE->Location = System::Drawing::Point(15, 256);
			this->buttonSOHRANENIYE->Name = L"buttonSOHRANENIYE";
			this->buttonSOHRANENIYE->Size = System::Drawing::Size(135, 20);
			this->buttonSOHRANENIYE->TabIndex = 17;
			this->buttonSOHRANENIYE->Text = L"Сохранить как";
			this->buttonSOHRANENIYE->UseVisualStyleBackColor = true;
			this->buttonSOHRANENIYE->Click += gcnew System::EventHandler(this, &MyForm::buttonSOHRANENIYE_Click);
			// 
			// chart1
			// 
			this->chart1->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
			chartArea1->AxisX->Title = L"X";
			chartArea1->AxisY->Title = L"Y";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(183, 20);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->IsVisibleInLegend = false;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(403, 203);
			this->chart1->TabIndex = 19;
			this->chart1->Text = L"график";
			title1->Name = L"Title1";
			title1->Text = L"МЕТОД ЭЙЛЕРА";
			this->chart1->Titles->Add(title1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 25);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Построение таблицы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 288);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxNACHALNOE);
			this->Controls->Add(this->buttonZAPUSK);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxKONEC);
			this->Controls->Add(this->buttonSOHRANENIYE);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonOCHISTKA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->buttonSHAGI);
			this->Controls->Add(this->buttonNACHALNOE);
			this->Controls->Add(this->buttonEXIT);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonKONEC);
			this->Controls->Add(this->textBoxSHAGI);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double a, b, y, h, n, f, y0;
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonNACHALO_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonKONEC_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonNACHALNOE_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSHAGI_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEXIT_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonOCHISTKA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonZAPUSK_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSOHRANENIYE_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	
}
;
}