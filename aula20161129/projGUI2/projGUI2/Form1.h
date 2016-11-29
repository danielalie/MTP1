#pragma once

namespace projGUI2 {

	#define MAXCHARDISP 16

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnAdicao;
	private: System::Windows::Forms::Button^  btnApaga;






	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnSubtracao;
	private: System::Windows::Forms::Button^  btnFatorial;






	private: System::Windows::Forms::Button^  btn1;

	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMultiplicacao;
	private: System::Windows::Forms::Button^  btnPotencia;





	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnSeparador;
	private: System::Windows::Forms::Button^  btnPosNeg;
	private: System::Windows::Forms::Button^  btnDivisao;
	private: System::Windows::Forms::Button^  btnRaizQuadrada;





	private: System::Windows::Forms::Button^  btnIgual;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdicao = (gcnew System::Windows::Forms::Button());
			this->btnApaga = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnSubtracao = (gcnew System::Windows::Forms::Button());
			this->btnFatorial = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacao = (gcnew System::Windows::Forms::Button());
			this->btnPotencia = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnSeparador = (gcnew System::Windows::Forms::Button());
			this->btnPosNeg = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnRaizQuadrada = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Courier New", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(12, 26);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(294, 47);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Goldenrod;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn7->Location = System::Drawing::Point(12, 94);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(54, 50);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Goldenrod;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn8->Location = System::Drawing::Point(72, 94);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(54, 50);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Goldenrod;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn9->Location = System::Drawing::Point(132, 94);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(54, 50);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnAdicao
			// 
			this->btnAdicao->BackColor = System::Drawing::Color::Goldenrod;
			this->btnAdicao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdicao->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnAdicao->Location = System::Drawing::Point(192, 94);
			this->btnAdicao->Name = L"btnAdicao";
			this->btnAdicao->Size = System::Drawing::Size(54, 50);
			this->btnAdicao->TabIndex = 1;
			this->btnAdicao->Text = L"+";
			this->btnAdicao->UseVisualStyleBackColor = false;
			this->btnAdicao->Click += gcnew System::EventHandler(this, &Form1::btnAdicao_Click);
			// 
			// btnApaga
			// 
			this->btnApaga->BackColor = System::Drawing::Color::Goldenrod;
			this->btnApaga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnApaga->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnApaga->Location = System::Drawing::Point(252, 94);
			this->btnApaga->Name = L"btnApaga";
			this->btnApaga->Size = System::Drawing::Size(54, 50);
			this->btnApaga->TabIndex = 1;
			this->btnApaga->Text = L"C";
			this->btnApaga->UseVisualStyleBackColor = false;
			this->btnApaga->Click += gcnew System::EventHandler(this, &Form1::btnApaga_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Goldenrod;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn4->Location = System::Drawing::Point(12, 150);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(54, 50);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Goldenrod;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn5->Location = System::Drawing::Point(72, 150);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(54, 50);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Goldenrod;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn6->Location = System::Drawing::Point(132, 150);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(54, 50);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnSubtracao
			// 
			this->btnSubtracao->BackColor = System::Drawing::Color::Goldenrod;
			this->btnSubtracao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSubtracao->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnSubtracao->Location = System::Drawing::Point(192, 150);
			this->btnSubtracao->Name = L"btnSubtracao";
			this->btnSubtracao->Size = System::Drawing::Size(54, 50);
			this->btnSubtracao->TabIndex = 1;
			this->btnSubtracao->Text = L"-";
			this->btnSubtracao->UseVisualStyleBackColor = false;
			this->btnSubtracao->Click += gcnew System::EventHandler(this, &Form1::btnSubtracao_Click);
			// 
			// btnFatorial
			// 
			this->btnFatorial->BackColor = System::Drawing::Color::Goldenrod;
			this->btnFatorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnFatorial->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnFatorial->Location = System::Drawing::Point(252, 150);
			this->btnFatorial->Name = L"btnFatorial";
			this->btnFatorial->Size = System::Drawing::Size(54, 50);
			this->btnFatorial->TabIndex = 1;
			this->btnFatorial->Text = L"n!";
			this->btnFatorial->UseVisualStyleBackColor = false;
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Goldenrod;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn1->Location = System::Drawing::Point(12, 206);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(54, 50);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Goldenrod;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn2->Location = System::Drawing::Point(72, 206);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(54, 50);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Goldenrod;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn3->Location = System::Drawing::Point(132, 206);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(54, 50);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnMultiplicacao
			// 
			this->btnMultiplicacao->BackColor = System::Drawing::Color::Goldenrod;
			this->btnMultiplicacao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMultiplicacao->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnMultiplicacao->Location = System::Drawing::Point(192, 206);
			this->btnMultiplicacao->Name = L"btnMultiplicacao";
			this->btnMultiplicacao->Size = System::Drawing::Size(54, 50);
			this->btnMultiplicacao->TabIndex = 1;
			this->btnMultiplicacao->Text = L"×";
			this->btnMultiplicacao->UseVisualStyleBackColor = false;
			this->btnMultiplicacao->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicacao_Click);
			// 
			// btnPotencia
			// 
			this->btnPotencia->BackColor = System::Drawing::Color::Goldenrod;
			this->btnPotencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnPotencia->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPotencia->Location = System::Drawing::Point(252, 206);
			this->btnPotencia->Name = L"btnPotencia";
			this->btnPotencia->Size = System::Drawing::Size(54, 50);
			this->btnPotencia->TabIndex = 1;
			this->btnPotencia->Text = L"xʸ";
			this->btnPotencia->UseVisualStyleBackColor = false;
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Goldenrod;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn0->Location = System::Drawing::Point(12, 262);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(54, 50);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnSeparador
			// 
			this->btnSeparador->BackColor = System::Drawing::Color::Goldenrod;
			this->btnSeparador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSeparador->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnSeparador->Location = System::Drawing::Point(72, 262);
			this->btnSeparador->Name = L"btnSeparador";
			this->btnSeparador->Size = System::Drawing::Size(54, 50);
			this->btnSeparador->TabIndex = 1;
			this->btnSeparador->Text = L",";
			this->btnSeparador->UseVisualStyleBackColor = false;
			this->btnSeparador->Click += gcnew System::EventHandler(this, &Form1::btnSeparador_Click);
			// 
			// btnPosNeg
			// 
			this->btnPosNeg->BackColor = System::Drawing::Color::Goldenrod;
			this->btnPosNeg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPosNeg->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPosNeg->Location = System::Drawing::Point(132, 262);
			this->btnPosNeg->Name = L"btnPosNeg";
			this->btnPosNeg->Size = System::Drawing::Size(54, 50);
			this->btnPosNeg->TabIndex = 1;
			this->btnPosNeg->Text = L"±";
			this->btnPosNeg->UseVisualStyleBackColor = false;
			// 
			// btnDivisao
			// 
			this->btnDivisao->BackColor = System::Drawing::Color::Goldenrod;
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnDivisao->Location = System::Drawing::Point(192, 262);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(54, 50);
			this->btnDivisao->TabIndex = 1;
			this->btnDivisao->Text = L"÷";
			this->btnDivisao->UseVisualStyleBackColor = false;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnRaizQuadrada
			// 
			this->btnRaizQuadrada->BackColor = System::Drawing::Color::Goldenrod;
			this->btnRaizQuadrada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRaizQuadrada->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnRaizQuadrada->Location = System::Drawing::Point(252, 262);
			this->btnRaizQuadrada->Name = L"btnRaizQuadrada";
			this->btnRaizQuadrada->Size = System::Drawing::Size(54, 50);
			this->btnRaizQuadrada->TabIndex = 1;
			this->btnRaizQuadrada->Text = L"√¯";
			this->btnRaizQuadrada->UseVisualStyleBackColor = false;
			// 
			// btnIgual
			// 
			this->btnIgual->BackColor = System::Drawing::Color::Goldenrod;
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIgual->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnIgual->Location = System::Drawing::Point(72, 318);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(174, 50);
			this->btnIgual->TabIndex = 1;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = false;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Form1::btnIgual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(319, 380);
			this->Controls->Add(this->btnRaizQuadrada);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btnPotencia);
			this->Controls->Add(this->btnMultiplicacao);
			this->Controls->Add(this->btnFatorial);
			this->Controls->Add(this->btnPosNeg);
			this->Controls->Add(this->btnSubtracao);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btnApaga);
			this->Controls->Add(this->btnSeparador);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnAdicao);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lblDisplay);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"CalcX";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}

		bool separado;
		bool encerrado;
		double numero;
		char op;

		void LimpaDisplay() {
			separado = false;
			lblDisplay->Text = "0";
		}
		void LimpaTudo() {
			LimpaDisplay();
			encerrado = false;
			numero = 0.0;
			op = '\0';
		}

#pragma endregion

	private: System::Void btnAdicao_Click(System::Object^  sender, System::EventArgs^  e) {
			numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '+';
			LimpaDisplay();
	}

	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "1";
					 else
						lblDisplay->Text = lblDisplay->Text + "1";
				 }
				 encerrado = false;
			 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "2";
					 else
						lblDisplay->Text = lblDisplay->Text + "2";
				 }
			  encerrado = false;
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "3";
					 else
						lblDisplay->Text = lblDisplay->Text + "3";
				 }
			  encerrado = false;
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "4";
					 else
						lblDisplay->Text = lblDisplay->Text + "4";
				 }
			  encerrado = false;
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "5";
					 else
						lblDisplay->Text = lblDisplay->Text + "5";
				 }
			  encerrado = false;
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "6";
					 else
						lblDisplay->Text = lblDisplay->Text + "6";
				 }
			  encerrado = false;
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "7";
					 else
						lblDisplay->Text = lblDisplay->Text + "7";
				 }
			  encerrado = false;
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "8";
					 else
						lblDisplay->Text = lblDisplay->Text + "8";
				 }
			  encerrado = false;
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text == "0" || encerrado)
						 lblDisplay->Text = "9";
					 else
						lblDisplay->Text = lblDisplay->Text + "9";
				 }
			  encerrado = false;
		 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
					 if(lblDisplay->Text != "0")
						 if(encerrado)
							 lblDisplay->Text = "0";
						 else
							lblDisplay->Text = lblDisplay->Text + "0";
				 }
			  encerrado = false;
		 }
private: System::Void btnSeparador_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP && !separado) {
						if(encerrado)
							lblDisplay->Text = "0";
						lblDisplay->Text = lblDisplay->Text + ",";
						separado = true;
				 }
			  encerrado = false;
		 }


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 separado = false;
			 encerrado = false;
			 op = '\0';
			 numero = 0.0;
		 }

private: System::Void btnSubtracao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '-';
			LimpaDisplay();
		 }
private: System::Void btnMultiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '*';
			LimpaDisplay();
		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			op = '/';
			LimpaDisplay();
		 }
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = numero;
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 encerrado = true;
			 switch(op) {
			 case '+':
				 lblDisplay->Text = System::Convert::ToString(numero2 + numero);
				 break;
			 case '-':
				 lblDisplay->Text = System::Convert::ToString(numero2 - numero);
				 break;
			 case '*':
				 lblDisplay->Text = System::Convert::ToString(numero2 * numero);
				 break;
			 case '/':
				 lblDisplay->Text = System::Convert::ToString(numero2 / numero);
				 break;
			 }

		 }
private: System::Void btnApaga_Click(System::Object^  sender, System::EventArgs^  e) {
			 LimpaTudo();
		 }
};
}

