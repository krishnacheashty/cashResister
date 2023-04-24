#pragma once

namespace cashResister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Collections::Generic;
	
	
	/// <summary>
	/// Summary for cashResister
	/// </summary>
	public ref class cashResister : public System::Windows::Forms::Form
	{
	public:
		cashResister(void)
		{
			InitializeComponent();


			//
			//TODO: Add the constructor code here
			//
			

		};
		String^ name;
		int amount;
	private: System::Windows::Forms::Label^ totalP;
	private: System::Windows::Forms::Button^ deleteBtn;

	public:
		double price;
		



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// vector<Product> cart;
		~cashResister()
		{
			if (components)
			{
				delete components;
			}
		}
		
	private: System::Windows::Forms::Label^ productName;
	
	protected:
	private: System::Windows::Forms::TextBox^ ProductTextBox;
	private: System::Windows::Forms::Label^ ProductAmount;
	private: System::Windows::Forms::TextBox^ AmountTextBox;
	private: System::Windows::Forms::Label^ ProductPrice;
	private: System::Windows::Forms::TextBox^ PriceTextBox;
	private: System::Windows::Forms::Button^ ProductNextButton;
	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::ListBox^ ProductlistBox;
	private: System::Windows::Forms::Label^ pName;
	private: System::Windows::Forms::Label^ pAmount;
	private: System::Windows::Forms::Label^ pPrice;
	private: System::Windows::Forms::ListBox^ FinellistBox;
	
	
	
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
		/// 
		
		void InitializeComponent(void)
		{
			this->productName = (gcnew System::Windows::Forms::Label());
			this->ProductTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProductAmount = (gcnew System::Windows::Forms::Label());
			this->AmountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProductPrice = (gcnew System::Windows::Forms::Label());
			this->PriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProductNextButton = (gcnew System::Windows::Forms::Button());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->ProductlistBox = (gcnew System::Windows::Forms::ListBox());
			this->pName = (gcnew System::Windows::Forms::Label());
			this->pAmount = (gcnew System::Windows::Forms::Label());
			this->pPrice = (gcnew System::Windows::Forms::Label());
			this->FinellistBox = (gcnew System::Windows::Forms::ListBox());
			this->totalP = (gcnew System::Windows::Forms::Label());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// productName
			// 
			this->productName->AutoSize = true;
			this->productName->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->productName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->productName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->productName->Location = System::Drawing::Point(30, 23);
			this->productName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->productName->Name = L"productName";
			this->productName->Size = System::Drawing::Size(160, 20);
			this->productName->TabIndex = 0;
			this->productName->Text = L"Inpur Product Name";
			// 
			// ProductTextBox
			// 
			this->ProductTextBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->ProductTextBox->Location = System::Drawing::Point(30, 62);
			this->ProductTextBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ProductTextBox->Name = L"ProductTextBox";
			this->ProductTextBox->Size = System::Drawing::Size(233, 20);
			this->ProductTextBox->TabIndex = 1;
			// 
			// ProductAmount
			// 
			this->ProductAmount->AutoSize = true;
			this->ProductAmount->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ProductAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductAmount->Location = System::Drawing::Point(32, 99);
			this->ProductAmount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ProductAmount->Name = L"ProductAmount";
			this->ProductAmount->Size = System::Drawing::Size(170, 18);
			this->ProductAmount->TabIndex = 2;
			this->ProductAmount->Text = L"Input Product Amount";
			// 
			// AmountTextBox
			// 
			this->AmountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AmountTextBox->Location = System::Drawing::Point(30, 131);
			this->AmountTextBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AmountTextBox->Name = L"AmountTextBox";
			this->AmountTextBox->Size = System::Drawing::Size(233, 24);
			this->AmountTextBox->TabIndex = 3;
			// 
			// ProductPrice
			// 
			this->ProductPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ProductPrice->AutoSize = true;
			this->ProductPrice->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ProductPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductPrice->Location = System::Drawing::Point(31, 177);
			this->ProductPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ProductPrice->Name = L"ProductPrice";
			this->ProductPrice->Size = System::Drawing::Size(152, 18);
			this->ProductPrice->TabIndex = 4;
			this->ProductPrice->Text = L"Input Product Price";
			// 
			// PriceTextBox
			// 
			this->PriceTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PriceTextBox->Location = System::Drawing::Point(30, 212);
			this->PriceTextBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->PriceTextBox->Name = L"PriceTextBox";
			this->PriceTextBox->Size = System::Drawing::Size(233, 24);
			this->PriceTextBox->TabIndex = 5;
			// 
			// ProductNextButton
			// 
			this->ProductNextButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ProductNextButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ProductNextButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductNextButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ProductNextButton->Location = System::Drawing::Point(30, 258);
			this->ProductNextButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ProductNextButton->Name = L"ProductNextButton";
			this->ProductNextButton->Size = System::Drawing::Size(120, 26);
			this->ProductNextButton->TabIndex = 6;
			this->ProductNextButton->Text = L"Next";
			this->ProductNextButton->UseVisualStyleBackColor = false;
			this->ProductNextButton->Click += gcnew System::EventHandler(this, &cashResister::ProductNextButton_Click);
			// 
			// submitButton
			// 
			this->submitButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->submitButton->Location = System::Drawing::Point(111, 303);
			this->submitButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(110, 25);
			this->submitButton->TabIndex = 7;
			this->submitButton->Text = L"Done";
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &cashResister::submitButton_Click);
			// 
			// ProductlistBox
			// 
			this->ProductlistBox->AccessibleDescription = L"";
			this->ProductlistBox->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ProductlistBox->ColumnWidth = 10;
			this->ProductlistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductlistBox->FormattingEnabled = true;
			this->ProductlistBox->ItemHeight = 18;
			this->ProductlistBox->Location = System::Drawing::Point(340, 46);
			this->ProductlistBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ProductlistBox->Name = L"ProductlistBox";
			this->ProductlistBox->Size = System::Drawing::Size(363, 238);
			this->ProductlistBox->TabIndex = 8;
			// 
			// pName
			// 
			this->pName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pName->AutoSize = true;
			this->pName->BackColor = System::Drawing::SystemColors::Highlight;
			this->pName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pName->Location = System::Drawing::Point(344, 19);
			this->pName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pName->Name = L"pName";
			this->pName->Padding = System::Windows::Forms::Padding(2, 3, 4, 3);
			this->pName->Size = System::Drawing::Size(110, 24);
			this->pName->TabIndex = 9;
			this->pName->Text = L"Product Name";
			this->pName->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pAmount
			// 
			this->pAmount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pAmount->AutoSize = true;
			this->pAmount->BackColor = System::Drawing::SystemColors::Highlight;
			this->pAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pAmount->Location = System::Drawing::Point(474, 19);
			this->pAmount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pAmount->Name = L"pAmount";
			this->pAmount->Padding = System::Windows::Forms::Padding(2, 3, 4, 3);
			this->pAmount->Size = System::Drawing::Size(121, 24);
			this->pAmount->TabIndex = 10;
			this->pAmount->Text = L"Product Amount";
			this->pAmount->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pPrice
			// 
			this->pPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pPrice->AutoSize = true;
			this->pPrice->BackColor = System::Drawing::SystemColors::Highlight;
			this->pPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pPrice->Location = System::Drawing::Point(600, 19);
			this->pPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pPrice->Name = L"pPrice";
			this->pPrice->Padding = System::Windows::Forms::Padding(2, 3, 4, 3);
			this->pPrice->Size = System::Drawing::Size(104, 24);
			this->pPrice->TabIndex = 11;
			this->pPrice->Text = L"Product Price";
			this->pPrice->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// FinellistBox
			// 
			this->FinellistBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FinellistBox->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->FinellistBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FinellistBox->FormatString = L"N2";
			this->FinellistBox->FormattingEnabled = true;
			this->FinellistBox->ItemHeight = 18;
			this->FinellistBox->Location = System::Drawing::Point(734, 54);
			this->FinellistBox->Margin = System::Windows::Forms::Padding(4, 10, 4, 3);
			this->FinellistBox->Name = L"FinellistBox";
			this->FinellistBox->Size = System::Drawing::Size(311, 238);
			this->FinellistBox->TabIndex = 12;
			// 
			// totalP
			// 
			this->totalP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->totalP->AutoSize = true;
			this->totalP->BackColor = System::Drawing::SystemColors::Highlight;
			this->totalP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalP->Location = System::Drawing::Point(731, 34);
			this->totalP->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->totalP->Name = L"totalP";
			this->totalP->Size = System::Drawing::Size(144, 18);
			this->totalP->TabIndex = 13;
			this->totalP->Text = L"Transaction Receipt:";
			this->totalP->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::SystemColors::Highlight;
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->Location = System::Drawing::Point(176, 261);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(130, 23);
			this->deleteBtn->TabIndex = 14;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &cashResister::deleteBtn_Click);
			// 
			// cashResister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1191, 340);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->totalP);
			this->Controls->Add(this->FinellistBox);
			this->Controls->Add(this->pName);
			this->Controls->Add(this->pAmount);
			this->Controls->Add(this->pPrice);
			this->Controls->Add(this->ProductlistBox);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->ProductNextButton);
			this->Controls->Add(this->PriceTextBox);
			this->Controls->Add(this->ProductPrice);
			this->Controls->Add(this->AmountTextBox);
			this->Controls->Add(this->ProductAmount);
			this->Controls->Add(this->ProductTextBox);
			this->Controls->Add(this->productName);
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"cashResister";
			this->Text = L"cashResister";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ProductNextButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ productName = this->ProductTextBox->Text;
		String^ productAmount = this->AmountTextBox->Text;
		String^ productPrice = this->PriceTextBox->Text;
		

		String^ item = productName + "                         " + productAmount + "                       " + productPrice ;
		
		this->ProductlistBox->Items->Add(item);

	}
	private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ productName = this->ProductTextBox->Text;
		String^ productAmount = this->AmountTextBox->Text;
		String^ productPrice = this->PriceTextBox->Text;


		String^ item = productName + "                         " + productAmount + "                       " + productPrice;

		this->ProductlistBox->Items->Remove(item);
		ProductTextBox->Text = "";
		AmountTextBox->Text = "";
		PriceTextBox->Text = "";
	}
		  
	private:
		List<cashResister^>^ cart = gcnew List<cashResister^>();
		
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
			   String^ productName = this->ProductTextBox->Text;
			   String^ productAmount = this->AmountTextBox->Text;
			   String^ productPrice = this->PriceTextBox->Text;
			   double eachProducTotal = System::Convert::ToInt16(productAmount) * System::Convert::ToInt16(productPrice);
			   String^ totalPrice = this->totalP->Text;
			   String^ item = productName + "            " + productAmount + "    x        " + productPrice + "  =  "+ eachProducTotal;
			   String^ total = "     Total Price  :" + eachProducTotal;
			   this->FinellistBox->Items->Add(item);
			   cashResister^ product= gcnew cashResister();
			   product->name = this->ProductTextBox->Text;
			   product->amount = System::Convert::ToInt32(AmountTextBox->Text);
			   product->price = System::Convert::ToInt32(PriceTextBox->Text);
			   cart->Add(product);
			   UpdateCart();
			   
			   ProductTextBox->Text = "";
			   AmountTextBox->Text = "";
			   PriceTextBox->Text = "";
		   }
		   
		   private: void UpdateCart() {
			   this->FinellistBox->Items->Clear();
			   double total = 0;
			   for (int i = 0; i < cart->Count; i++) {
				   cashResister^ product = cart[i];
				   this->FinellistBox->Items->Add(product->name +" " + product->amount+ " x " + product->price + " = " + (product->price * product->amount));
				   
				   
				   total += product->amount * product->price;
			   }
			   String^ totalAmount = this->totalP->Text;
			   totalAmount = "Total: " + total;
			   this->FinellistBox->Items->Add(totalAmount);
		   }
	
};
}
