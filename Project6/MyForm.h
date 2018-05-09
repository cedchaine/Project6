#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveasToolStripMenuItem;


	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


	// User variable declaration
	private: XmlDocument^ doc = gcnew XmlDocument;
	private: System::Xml::XmlDocument::XmlNode^ root_node;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  addAfterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  duplicateToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  getAddressToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addAfterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->duplicateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getAddressToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(534, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveasToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(41, 23);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveasToolStripMenuItem
			// 
			this->saveasToolStripMenuItem->Name = L"saveasToolStripMenuItem";
			this->saveasToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->saveasToolStripMenuItem->Text = L"Save As...";
			this->saveasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveasToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Location = System::Drawing::Point(0, 27);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(534, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Location = System::Drawing::Point(0, 399);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(534, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->splitContainer1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 52);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(534, 347);
			this->panel1->TabIndex = 3;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->treeView1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(534, 347);
			this->splitContainer1->SplitterDistance = 146;
			this->splitContainer1->TabIndex = 0;
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(146, 347);
			this->treeView1->TabIndex = 0;
			this->treeView1->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &MyForm::treeView1_NodeMouseClick);
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->richTextBox1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->listView1);
			this->splitContainer2->Size = System::Drawing::Size(384, 347);
			this->splitContainer2->SplitterDistance = 229;
			this->splitContainer2->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(384, 229);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// listView1
			// 
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(384, 114);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"xml";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addAfterToolStripMenuItem,
					this->duplicateToolStripMenuItem, this->getAddressToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(152, 76);
			// 
			// addAfterToolStripMenuItem
			// 
			this->addAfterToolStripMenuItem->Name = L"addAfterToolStripMenuItem";
			this->addAfterToolStripMenuItem->Size = System::Drawing::Size(151, 24);
			this->addAfterToolStripMenuItem->Text = L"Add after";
			// 
			// duplicateToolStripMenuItem
			// 
			this->duplicateToolStripMenuItem->Name = L"duplicateToolStripMenuItem";
			this->duplicateToolStripMenuItem->Size = System::Drawing::Size(151, 24);
			this->duplicateToolStripMenuItem->Text = L"Duplicate";
			// 
			// getAddressToolStripMenuItem
			// 
			this->getAddressToolStripMenuItem->Name = L"getAddressToolStripMenuItem";
			this->getAddressToolStripMenuItem->Size = System::Drawing::Size(151, 24);
			this->getAddressToolStripMenuItem->Text = L"Get address";
			this->getAddressToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::getAddressToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 421);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Function***************
		private: void generate_treeview(System::Windows::Forms::TreeView^ treeview) {

			this->treeView1->Nodes->Add(root_node->Name);
			
			for (int i = 0; i < root_node->ChildNodes->Count; i++){
				this->treeView1->Nodes[0]->Nodes->Add(root_node->ChildNodes[i]->Name);
				this->treeView1->Nodes[0]->Nodes[i]->ContextMenuStrip = this->contextMenuStrip1;

				for (int j = 0; j < root_node->ChildNodes[i]->ChildNodes->Count; j++){
					this->treeView1->Nodes[0]->Nodes[i]->Nodes->Add(root_node->ChildNodes[i]->ChildNodes[j]->Name);
					this->treeView1->Nodes[0]->Nodes[i]->Nodes[j]->ContextMenuStrip = this->contextMenuStrip1;

					for (int k = 0; k < root_node->ChildNodes[i]->ChildNodes[j]->ChildNodes->Count; k++){
						this->treeView1->Nodes[0]->Nodes[i]->Nodes[j]->Nodes->Add(root_node->ChildNodes[i]->ChildNodes[j]->ChildNodes[k]->Name);
						this->treeView1->Nodes[0]->Nodes[i]->Nodes[j]->Nodes[k]->ContextMenuStrip = this->contextMenuStrip1;
					}
				}
			}
		}

		private: System::String^ selected_treeview_node_address(System::Windows::Forms::TreeView^ treeview) {

			System::String^ address;
			System::Windows::Forms::TreeNode^ node = treeview->SelectedNode;
			int depth = node->Level;
			address = "/[0]";
			for (int i = 0; i < depth; i++)
			{
				address = address + "/[";
				address = address + node->Index;
				address = address + "]";

				node = node->Parent;

			}

			return address;


		}




	//Events****************




	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		this->treeView1->Nodes->Clear();

		if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{			
			System::String^ selected_path = this->openFileDialog1->FileName;			
			this->doc->Load(selected_path);
		}
		root_node = doc->FirstChild;


		generate_treeview(this->treeView1);

	}




private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	doc->RemoveAll();
	this->treeView1->Nodes->Clear();

	doc->LoadXml("<Root></Root>");
	root_node = doc->FirstChild;

	generate_treeview(this->treeView1);

}


private: System::Void saveasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {


	if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::String^ selected_path = this->saveFileDialog1->FileName;
		this->doc->Save(selected_path);
	}

}
private: System::Void getAddressToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	this->richTextBox1->Clear();
	this->richTextBox1->AppendText(selected_treeview_node_address(this->treeView1));

}
private: System::Void treeView1_NodeMouseClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {
	treeView1->SelectedNode = e->Node;
}
};
}
