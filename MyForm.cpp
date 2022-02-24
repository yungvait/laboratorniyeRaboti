#include "MyForm.h"
#include "Windows.h"


using namespace �����������;// �������� �������
using namespace System::Windows::Forms;
using namespace System;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	�����������::MyForm form;
	Application::Run(% form);
}


System::Void �����������::MyForm::buttonEXIT_Click(System::Object^ sender, System::EventArgs^ e)
{
	Close();
	return System::Void();
}

System::Void �����������::MyForm::buttonOCHISTKA_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Clear();
	textBoxKONEC->Clear();
	textBoxNACHALNOE->Clear();
	textBoxSHAGI->Clear();
	this->chart1->Series[0]->Points->Clear();
	return System::Void();
}

System::Void �����������::MyForm::buttonZAPUSK_Click(System::Object^ sender, System::EventArgs^ e)
{
	int i;
	a = System::Double::Parse(this->textBox1->Text);
	b = System::Double::Parse(this->textBoxKONEC->Text);
	y0 = System::Double::Parse(this->textBoxNACHALNOE->Text);
	n = System::Double::Parse(this->textBoxSHAGI->Text);

	//printf("\n Vvedite nachalo intervala {a;b}");
	//scanf("%f", &a);
	//printf("\n Vvedite konec intervala {a;b}");
	//scanf("%f", &b);
	//printf("\n Vvedite nachalnoe znachenie y(0)");
	//scanf("%f", &y0);
	//printf("\n Vvedite chislo shagov h");
	//scanf("%f", &n);

	h = (b - a) / n; //������� ���
	y = y0; //��� ���� ����� ������ ��������� � ������ ����� 
	this->chart1->Series[0]->Points->Clear();
	for (i = 0; i <= n; i++)
	{
		f = 2 * a + y0; //
		
		this->chart1->Series[0]->Points->AddXY(a,y);//printf("\n %f \t %f", a, y);
		y = y0 + h * f;
		a += h;
		y0 = y;
	}
	//cin.get();
	//return 0;

	return System::Void();
}

System::Void �����������::MyForm::buttonSOHRANENIYE_Click(System::Object^ sender, System::EventArgs^ e)
{
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = L"Images|*.Jpeg";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ extension = System::IO::Path::GetExtension(saveFileDialog->FileName);


		chart1->SaveImage(saveFileDialog->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);

	}
}

System::Void �����������::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	return System::Void();
}

System::Void �����������::MyForm::buttonSHAGI_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ FileName = "";//������� ���������� ��� �������� ���� � �����
	if (openFileDialog4->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = openFileDialog4->FileName;//���������� ���� � ���������� �����
	}
	try {
		StreamReader^ file = File::OpenText(FileName);//��������� ����
		textBoxSHAGI->Text = file->ReadToEnd();//���������� ���������� ����� � ���������
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "���� �� ��� ������", "������", MessageBoxButtons::OK);
	}
	return System::Void();
}

System::Void �����������::MyForm::buttonNACHALNOE_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ FileName = "";//������� ���������� ��� �������� ���� � �����
	if (openFileDialog3->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = openFileDialog3->FileName;//���������� ���� � ���������� �����
	}
	try {
		StreamReader^ file = File::OpenText(FileName);//��������� ����
		textBoxNACHALNOE->Text = file->ReadToEnd();//���������� ���������� ����� � ���������
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "���� �� ��� ������", "������", MessageBoxButtons::OK);
	}

	return System::Void();
}

System::Void �����������::MyForm::buttonKONEC_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ FileName = "";//������� ���������� ��� �������� ���� � �����
	if (openFileDialog2->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = openFileDialog2->FileName;//���������� ���� � ���������� �����
	}
	try {
		StreamReader^ file = File::OpenText(FileName);//��������� ����
		textBoxKONEC->Text = file->ReadToEnd();//���������� ���������� ����� � ���������
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "���� �� ��� ������", "������", MessageBoxButtons::OK);
	}
	return System::Void();
}

System::Void �����������::MyForm::buttonNACHALO_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ FileName = "";//������� ���������� ��� �������� ���� � �����
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = openFileDialog1->FileName;//���������� ���� � ���������� �����
	}
	try {
		StreamReader^ file = File::OpenText(FileName);//��������� ����
		textBox1->Text = file->ReadToEnd();//���������� ���������� ����� � ���������
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "���� �� ��� ������", "������", MessageBoxButtons::OK);
	}
	return System::Void();
}
