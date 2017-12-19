#pragma once
#include <C:\Users\User\Documents\github\Queue\Queue\queue.h>
//#include <сmath>
#include <math.h>

namespace QueueApp {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	public:
		Graphics^ gr;
		TProc *procs;
		TQueue<TTask> *task;
		int taskID;
		int NumberFree;
		int maxsize;
		
		MyForm(void)
		{
			InitializeComponent();
			gr = pictureBox1->CreateGraphics();
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
	private: System::Windows::Forms::Label^  label1;
	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"кол-во процессоров";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(241, 150);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(502, 502);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"вероятность создания задачи";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"max StepCount";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"max ProcCount";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 147);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 217);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 664);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void FillProcessor(TProc pr, int tskcolor) {
			Color TaskColor;
			switch (tskcolor)
		{
		case 0:
			TaskColor = Color::Yellow; break;
		case 1:
			TaskColor = Color::Blue; break;
		case 2:
			TaskColor = Color::DarkViolet; break;
		case 3:
			TaskColor = Color::Brown; break;
		case 4:
			TaskColor = Color::Black; break;
		case 5:
			TaskColor = Color::DarkBlue; break;
		case 6:
			TaskColor = Color::Pink; break;
		case 7:
			TaskColor = Color::SpringGreen; break;
		case 8:
			TaskColor = Color::Aqua; break;
		case 9:
			TaskColor = Color::Red; break;
		}
			SolidBrush^ TBrush = gcnew SolidBrush(TaskColor);
			gr->FillRectangle(TBrush, pr.x1, pr.y1, pr.x2, pr.y2);
		}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	task = new TQueue<TTask>[1000];
	int taskID = 1;
	int NumberFree = 0;
    int maxsize = Convert::ToInt32(textBox1->Text);
	int newsize = ceil(sqrt((double)maxsize));
	procs = new TProc[maxsize];
	int LengthSide = sqrt(((double)pictureBox1->Height)*((double)pictureBox1->Height) / (newsize*newsize)); /////////////
	procs[0].x1 = 0;
	procs[0].y1 = 0;
	procs[0].x2 = LengthSide - 5;
	procs[0].y2 = LengthSide - 5;
	int k = 0;
	int stop = 0;
	SolidBrush^ GreenBrush = gcnew SolidBrush(Color::Green);
	for (int i = 0; i < newsize; i++) {
		for (int j = 0; j < newsize; j++) {
			gr->FillRectangle(GreenBrush, procs[k].x1, procs[k].y1, procs[k].x2, procs[k].y2);
			stop++;
			if (stop == maxsize) {
				break;
			}
			procs[k + 1].x1 = procs[k].x1 + LengthSide;
			procs[k + 1].x2 = procs[k].x2;
			procs[k + 1].y1 = procs[k].y1;
			procs[k + 1].y2 = procs[k].y2;
			k++;
		}
		if (stop == maxsize) {
			break;
		}
		if (k != maxsize) {
			procs[k].x1 = 0;
			procs[k].y1 = procs[k - 1].y1 + LengthSide;
			procs[k].x2 = LengthSide - 5;
			procs[k].y2 = procs[k - 1].y2;
		}
	}
	timer1->Enabled = true;



}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	int maxsize = Convert::ToInt32(textBox1->Text);
	int probability = rand() % 100;
	if (probability < Convert::ToInt32(textBox2->Text)) {
		TTask tsk;
		tsk.id = taskID;
		taskID++;
		tsk.StepCount = rand() % (Convert::ToInt32(textBox3->Text));
		tsk.ProcCount = rand() % (Convert::ToInt32(textBox4->Text));
		tsk.setcolor();
		task->push(tsk);
	}
		for (int i = 0; i < maxsize; i++) {
			if (!procs[i].idle && procs[i].TaskStepCount == 0) {
				procs[i].idle = true;
				
				FillProcessor(procs[i], 2);
			}
			if (procs[i].idle)
				NumberFree++;
			else
				procs[i].TaskStepCount--;
		}


		for (int i = 0; i < task->getSize(); i++) {
			TTask task1 = task->pop();
			if (task1.ProcCount < NumberFree) {
				int k = 0;
				//task1.setcolor();
				while  (task1.ProcCount != 0 && k < maxsize) {
					if (procs[k].idle) {
						procs[k].idle = false;
						FillProcessor(procs[k], task1.TaskColor);
						procs[k].TaskStepCount = task1.StepCount;
						task1.ProcCount--;
					}
					k++;
				}
				continue;
			}
			task->push(task1);
		}
	


}
};
}
