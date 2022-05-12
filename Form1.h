#pragma once
#include <filesystem>
#include "msclr\marshal_cppstd.h"

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ImageList^ imageList2;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ folderToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ textFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;

	private: System::Windows::Forms::ToolStripMenuItem^ moveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;

	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ renameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ onlyFilesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ allToolStripMenuItem;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->folderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->renameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->moveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->onlyFilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1517, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->createToolStripMenuItem,
					this->deleteToolStripMenuItem, this->toolStripSeparator1, this->renameToolStripMenuItem, this->moveToolStripMenuItem, this->copyToolStripMenuItem,
					this->pasteToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->fileToolStripMenuItem->Text = L"Файл";
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->folderToolStripMenuItem,
					this->textFileToolStripMenuItem
			});
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->createToolStripMenuItem->Text = L"Создать";
			// 
			// folderToolStripMenuItem
			// 
			this->folderToolStripMenuItem->Name = L"folderToolStripMenuItem";
			this->folderToolStripMenuItem->Size = System::Drawing::Size(204, 26);
			this->folderToolStripMenuItem->Text = L"Папку";
			this->folderToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::folderToolStripMenuItem_Click);
			// 
			// textFileToolStripMenuItem
			// 
			this->textFileToolStripMenuItem->Name = L"textFileToolStripMenuItem";
			this->textFileToolStripMenuItem->Size = System::Drawing::Size(204, 26);
			this->textFileToolStripMenuItem->Text = L"Текстовый файл";
			this->textFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::textFileToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->deleteToolStripMenuItem->Text = L"Удалить";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::deleteToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(221, 6);
			// 
			// renameToolStripMenuItem
			// 
			this->renameToolStripMenuItem->Name = L"renameToolStripMenuItem";
			this->renameToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->renameToolStripMenuItem->Text = L"Переименовать";
			this->renameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::renameToolStripMenuItem_Click);
			// 
			// moveToolStripMenuItem
			// 
			this->moveToolStripMenuItem->Name = L"moveToolStripMenuItem";
			this->moveToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->moveToolStripMenuItem->Text = L"Переместить файл";
			this->moveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::replace);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->copyToolStripMenuItem->Text = L"Копировать";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->onlyFilesToolStripMenuItem,
					this->allToolStripMenuItem
			});
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->pasteToolStripMenuItem->Text = L"Вставить";
			// 
			// onlyFilesToolStripMenuItem
			// 
			this->onlyFilesToolStripMenuItem->Name = L"onlyFilesToolStripMenuItem";
			this->onlyFilesToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->onlyFilesToolStripMenuItem->Text = L"Только файлы";
			this->onlyFilesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::onlyFilesToolStripMenuItem_Click);
			// 
			// allToolStripMenuItem
			// 
			this->allToolStripMenuItem->Name = L"allToolStripMenuItem";
			this->allToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->allToolStripMenuItem->Text = L"Все файлы и папки";
			this->allToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::allToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(221, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->exitToolStripMenuItem->Text = L"Выход";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// imageList2
			// 
			this->imageList2->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList2->ImageSize = System::Drawing::Size(16, 16);
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Location = System::Drawing::Point(0, 813);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1517, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Left;
			this->treeView1->ImageIndex = 0;
			this->treeView1->ImageList = this->imageList1;
			this->treeView1->Location = System::Drawing::Point(0, 28);
			this->treeView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->treeView1->Name = L"treeView1";
			this->treeView1->SelectedImageIndex = 0;
			this->treeView1->Size = System::Drawing::Size(257, 785);
			this->treeView1->StateImageList = this->imageList1;
			this->treeView1->TabIndex = 2;
			this->treeView1->BeforeExpand += gcnew System::Windows::Forms::TreeViewCancelEventHandler(this, &Form1::treeView1_BeforeExpand_1);
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Form1::treeView1_AfterSelect_1);
			this->treeView1->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &Form1::treeView1_NodeMouseClick);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->listView2);
			this->panel1->Controls->Add(this->splitter2);
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Controls->Add(this->splitter1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(257, 28);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1260, 785);
			this->panel1->TabIndex = 3;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader4, this->columnHeader5,
					this->columnHeader6
			});
			this->listView2->HideSelection = false;
			this->listView2->LabelEdit = true;
			this->listView2->LargeImageList = this->imageList2;
			this->listView2->Location = System::Drawing::Point(636, 4);
			this->listView2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(615, 772);
			this->listView2->SmallImageList = this->imageList2;
			this->listView2->TabIndex = 3;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->AfterLabelEdit += gcnew System::Windows::Forms::LabelEditEventHandler(this, &Form1::listView2_AfterLabelEdit);
			this->listView2->ItemActivate += gcnew System::EventHandler(this, &Form1::listView2_ItemActivate);
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView2_SelectedIndexChanged);
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Имя";
			this->columnHeader4->Width = 150;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Размер";
			this->columnHeader5->Width = 150;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Изменен";
			this->columnHeader6->Width = 150;
			// 
			// splitter2
			// 
			this->splitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter2->Location = System::Drawing::Point(4, 0);
			this->splitter2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(1256, 4);
			this->splitter2->TabIndex = 2;
			this->splitter2->TabStop = false;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->HideSelection = false;
			this->listView1->LabelEdit = true;
			this->listView1->LargeImageList = this->imageList2;
			this->listView1->Location = System::Drawing::Point(12, 4);
			this->listView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(615, 773);
			this->listView1->SmallImageList = this->imageList2;
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->AfterLabelEdit += gcnew System::Windows::Forms::LabelEditEventHandler(this, &Form1::listView1_AfterLabelEdit);
			this->listView1->ItemActivate += gcnew System::EventHandler(this, &Form1::listView1_ItemActivate_1);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Имя";
			this->columnHeader1->Width = 150;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Размер";
			this->columnHeader2->Width = 150;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Изменен";
			this->columnHeader3->Width = 150;
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(4, 785);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(483, 0);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 30);
			this->button1->TabIndex = 4;
			this->button1->Text = L"PANEL 1\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::YellowGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1077, 0);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"PANEL 2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(1517, 838);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Файловый менеджер";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool  Delete;
		static bool OneFile;
		TreeNode^ delnode;
		String^ NameList;
		String^ sourcePath;
		String^ fileName;
		String^ PathForDel;
		static int Pole = 1;
		static int signal = 0;
		static int i = 0;
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		Image^ myImage = Image::FromFile(".\\ImageList2\\35FLOPPY.jpg");
		imageList1->Images->Add(myImage);
		myImage = Image::FromFile(".\\ImageList2\\CLSDFOLD.jpg");
		imageList1->Images->Add(myImage);
		myImage = Image::FromFile(".\\ImageList2\\OPENFOLD.jpg");
		imageList1->Images->Add(myImage);

		myImage = Image::FromFile(".\\ImageList2\\CLSDFOLD.jpg");
		imageList2->Images->Add(myImage);
		myImage = Image::FromFile(".\\ImageList2\\DOC.jpg");
		imageList2->Images->Add(myImage);
		DriveTreeInit();
		myImage = Image::FromFile(".\\ImageList2\\EXE.jpg");
		imageList2->Images->Add(myImage);
		myImage = Image::FromFile(".\\ImageList2\\HLP.jpg");
		imageList2->Images->Add(myImage);
		myImage = Image::FromFile(".\\ImageList2\\TXT.jpg");
		imageList2->Images->Add(myImage);
		myImage = Image::FromFile(".\\ImageList2\\WINDOC.jpg");
		imageList2->Images->Add(myImage);

		DriveTreeInit();

		array<String^>^ drivesArray = Directory::GetLogicalDrives();

		for each (String ^ s in drivesArray)
			Console::Write("{0} ", s);
	}
	public: System::Void DriveTreeInit()
	{
		array<String^>^ drivesArray = Directory::GetLogicalDrives();

		treeView1->BeginUpdate();

		treeView1->Nodes->Clear();

		for each (String ^ s in drivesArray)
		{
			TreeNode^ drive = gcnew TreeNode(s, 0, 0);
			treeView1->Nodes->Add(drive);

			GetDirs(drive);
		}

		treeView1->EndUpdate();
	}
	public: System::Void GetDirs(TreeNode^ node)
	{
		array<DirectoryInfo^>^ diArray;

		node->Nodes->Clear();

		String^ fullPath = node->FullPath;
		DirectoryInfo^ di = gcnew DirectoryInfo(fullPath);

		try
		{
			diArray = di->GetDirectories();
		}
		catch (...)
		{
			return;
		}
		for each (DirectoryInfo ^ dirinfo in diArray)
		{
			TreeNode^ dir = gcnew TreeNode(dirinfo->Name, 1, 2);
			node->Nodes->Add(dir);
		}
	}
	private: System::Void treeView1_BeforeExpand_1(System::Object^ sender, System::Windows::Forms::TreeViewCancelEventArgs^ e)
	{
		treeView1->BeginUpdate();

		for each (TreeNode ^ node in e->Node->Nodes)
		{
			GetDirs(node);
		}

		treeView1->EndUpdate();
	}
	private: System::Void treeView1_AfterSelect_1(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
	{
		TreeNode^ selectedNode = e->Node;
		String^ fullPath = selectedNode->FullPath;

		DirectoryInfo^ di = gcnew DirectoryInfo(fullPath);
		array<FileInfo^>^ fiArray;
		array<DirectoryInfo^>^ diArray;

		try
		{
			fiArray = di->GetFiles();
			diArray = di->GetDirectories();
		}
		catch (...)
		{
			return;
		}
		if (Pole == 1)
			listView1->Items->Clear();
		else if (Pole = 2)
			listView2->Items->Clear();

		for each (DirectoryInfo ^ dirInfo in diArray)
		{
			ListViewItem^ lvi = gcnew ListViewItem(dirInfo->Name);
			lvi->SubItems->Add("0");
			lvi->SubItems->Add(dirInfo->LastWriteTime.ToString());
			lvi->ImageIndex = 0;
			if (Pole == 1)
				listView1->Items->Add(lvi);
			else if (Pole = 2)
				listView2->Items->Add(lvi);
		}

		for each (FileInfo ^ fileInfo in fiArray)
		{
			ListViewItem^ lvi = gcnew ListViewItem(fileInfo->Name);
			lvi->SubItems->Add(fileInfo->Length.ToString());
			lvi->SubItems->Add(fileInfo->LastWriteTime.ToString());

			String^ filenameExtension = Path::GetExtension(fileInfo->Name)->ToLower();

			if (filenameExtension == ".com")
			{
				lvi->ImageIndex = 2;
			}
			else if (filenameExtension == ".exe")
			{
				lvi->ImageIndex = 2;
			}
			else if (filenameExtension == ".hlp")
			{
				lvi->ImageIndex = 3;
			}
			else if (filenameExtension == ".txt")
			{
				lvi->ImageIndex = 4;
			}
			else if (filenameExtension == ".doc")
			{
				lvi->ImageIndex = 5;
			}
			else
			{
				lvi->ImageIndex = 1;
			}
			if (Pole == 1)
				listView1->Items->Add(lvi);
			else if (Pole = 2)
				listView2->Items->Add(lvi);
		}
	}
	private: System::Void listView1_ItemActivate_1(System::Object^ sender, System::EventArgs^ e)
	{
		for each (ListViewItem ^ lvi in listView1->SelectedItems)
		{
			String^ ext = Path::GetExtension(lvi->Text)->ToLower();
			String^ fullPath = treeView1->SelectedNode->FullPath;
			if (ext == ".txt" || ext == ".htm" || ext == ".html")
			{
				try
				{
					//richTextBox1->LoadFile(Path::Combine(fullPath, lvi->Text),RichTextBoxStreamType::PlainText);

					//toolStrip1->Text = lvi->Text;
				}
				catch (...)
				{
					return;
				}
			}
			else if (ext == ".rtf")
			{
				try
				{
					//richTextBox1->LoadFile(Path::Combine(fullPath, lvi->Text),RichTextBoxStreamType::RichText);

					//toolStrip1->Text = lvi->Text;
				}
				catch (...)
				{
					return;
				}
			}
		}
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int Flag = 0;
		if (listView1->SelectedItems->Count != 0 || listView2->SelectedItems->Count != 0)
		{
			if (listView1->SelectedItems->Count != 0) {
				NameList = listView1->SelectedItems[0]->Text;
				Flag = 1;
			}
			else
			{
				NameList = listView2->SelectedItems[0]->Text;
				Flag = 2;
			}
			Delete = true;
		}
		else
		{
			Delete = false;
		}


		if (Delete == true)
		{
			if (Directory::Exists(Path::Combine(treeView1->SelectedNode->FullPath, NameList)))
			{
				if (MessageBox::Show("Вы действительно хотите удалить папку?", "Удаление", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					try
					{

						Directory::Delete(Path::Combine(treeView1->SelectedNode->FullPath, NameList), true);
						if (Flag == 1)
							listView1->Items->RemoveAt(listView1->SelectedIndices[0]);
						else
							listView2->Items->RemoveAt(listView2->SelectedIndices[0]);
						GetDirs(delnode);
					}
					catch (...)
					{
						MessageBox::Show("Невозможно удалить данную папку", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}
			else if (File::Exists(Path::Combine(treeView1->SelectedNode->FullPath, NameList)))
			{
				if (MessageBox::Show("Вы действительно хотите удалить файл?", "Удаление", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					try
					{
						File::Delete(Path::Combine(treeView1->SelectedNode->FullPath, NameList));
						if (Flag == 1)
							listView1->Items->RemoveAt(listView1->SelectedIndices[0]);
						else
							listView2->Items->RemoveAt(listView2->SelectedIndices[0]);
						GetDirs(delnode);
					}
					catch (...)
					{
						MessageBox::Show("Невозможно удалить данный файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}
		}
		else
		{
			if (Directory::Exists(treeView1->SelectedNode->FullPath))
			{
				if (MessageBox::Show("Вы действительно хотите удалить папку?", "Удаление", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					try
					{
						Directory::Delete(treeView1->SelectedNode->FullPath, true);
						treeView1->Nodes->Remove(treeView1->SelectedNode);
					}
					catch (...)
					{
						MessageBox::Show("Невозможно удалить данную папку", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}
		}
	}
		   void del()
		   {
			   NameList = fileName;
			   File::Delete(Path::Combine(PathForDel, NameList));
			   String^ i = PathForDel;
			   std::string e = msclr::interop::marshal_as<std::string>(i);
			   char* a = &e[0];
			   remove(a);


		   }
	private: System::Void treeView1_NodeMouseClick(System::Object^ sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^ e)
	{
		delnode = e->Node;
	}
	private: System::Void folderToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Счётчик
		int i = 2;
		//Запоминания полного пути для создания папки в стринговую переменную
		String^ DirectoryFolder = treeView1->SelectedNode->FullPath;
		String^ DirFoldName = "Новая папка";

		DirectoryInfo^ dir = gcnew DirectoryInfo(treeView1->SelectedNode->FullPath);
		array<DirectoryInfo^>^ dirs = dir->GetDirectories();

		StringBuilder^ strBuilder = gcnew StringBuilder(DirFoldName);

		for each (DirectoryInfo ^ FolderName in dirs)
		{
			if (DirFoldName == FolderName->Name)
			{

				strBuilder->Append(i.ToString());
				DirFoldName = strBuilder->ToString();
				i++;
			}
		}

		//Если каталог не существует, то создаём новый каталог
		if (!Directory::Exists(DirectoryFolder + "\\" + DirFoldName))
		{
			Directory::CreateDirectory(DirectoryFolder + "\\" + DirFoldName);
			listView1->Items->Add(DirFoldName);
			GetDirs(delnode);
			i = listView1->Items->Count - 1;
			listView1->Items[i]->Selected = true;
			listView1->SelectedItems[0]->BeginEdit();
		}
	}
	private: System::Void listView1_AfterLabelEdit(System::Object^ sender, System::Windows::Forms::LabelEditEventArgs^ e)
	{
		if (e->Label != nullptr)
		{
			if (e->Label->Length > 0)
			{
				array <Char>^ temp = { '/','*','?','|', '\\', '<', '>','"' };
				if (e->Label->IndexOfAny(temp) == -1)
				{
					try
					{
						Directory::Move(treeView1->SelectedNode->FullPath + "\\" + listView1->SelectedItems[0]->Text, treeView1->SelectedNode->FullPath + "\\" + e->Label->ToString());
						GetDirs(delnode);
					}
					catch (...)
					{
						MessageBox::Show("Проверьте правильность ввода имени", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else
				{
					e->CancelEdit = true;
					MessageBox::Show("Имя папки(файла) не должно содержать следующих знаков: \/:*?<>|", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				e->CancelEdit = true;
				MessageBox::Show("Имя папки(файла) не может быть пустым.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void renameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (listView1->SelectedItems->Count != 0 || listView2->SelectedItems->Count)
		{
			if (listView1->SelectedItems->Count != 0)
				listView1->SelectedItems[0]->BeginEdit();
			else
				listView2->SelectedItems[0]->BeginEdit();
		}
		else
		{
			MessageBox::Show("Не выбран(-а) файл или папка", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		sourcePath = treeView1->SelectedNode->FullPath;
		if (listView1->SelectedItems->Count != 0 || listView2->SelectedItems->Count != 0)
		{
			if(listView1->SelectedItems->Count != 0)
			fileName = listView1->SelectedItems[0]->Text;
			else
			fileName = listView2->SelectedItems[0]->Text;
			OneFile = true;
		}
		else
		{
			fileName = treeView1->SelectedNode->Text;
			OneFile = false;
		}
	}
	private: System::Void onlyFilesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			String^ targetPath = treeView1->SelectedNode->FullPath;
			String^ sourceFile = Path::Combine(sourcePath, fileName);
			String^ destFile = Path::Combine(targetPath, fileName);

			if (OneFile == true)
			{
				if (!Directory::Exists(targetPath))
				{
					Directory::CreateDirectory(targetPath);
				}

				File::Copy(sourceFile, destFile, true);
				GetDirs(delnode); 
			}
			else
			{
				if (Directory::Exists(sourcePath))
				{
					array<String^>^ files = Directory::GetFiles(sourcePath);

					for each (String ^ s in files)
					{
						fileName = Path::GetFileName(s);
						destFile = Path::Combine(targetPath, fileName);
						File::Copy(s, destFile, true);
						GetDirs(delnode);
					}
				}
				else
				{
					MessageBox::Show("Исходный путь не существует", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		catch (...)
		{
			MessageBox::Show("Не был выбран файл(папка) для копирования или перемещения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (signal == 1)
		{
			del();
			signal = 0;
		}
	}
	private: System::Void allToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Копирование из текущего каталога, включая в себя подкаталоги
		//Если в listView выбран элемент, то...
		if (OneFile == true)
		{
			MessageBox::Show("Вы не выбрали директорию!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (listView1->SelectedItems->Count != 0)
		{
			DirectoryCopy(sourcePath, Path::Combine(treeView1->SelectedNode->FullPath, listView1->SelectedItems[0]->Text), true);
		}
		//В противном случае...
		else
		{
			DirectoryCopy(sourcePath, treeView1->SelectedNode->FullPath, true);
		}
	}
	public: System::Void DirectoryCopy(String^ sourceDirName, String^ destDirName, bool copySubDirs)
	{
		//Получение подкаталогов указанной директории
		DirectoryInfo^ dir = gcnew DirectoryInfo(sourceDirName);

		if (!dir->Exists)
		{
			throw gcnew DirectoryNotFoundException("Исходный каталог не существует или не может быть найден: " + sourceDirName);
		}
		array<DirectoryInfo^>^ dirs = dir->GetDirectories();

		//Если каталог не существует, то создаём новый каталог
		if (!Directory::Exists(destDirName))
		{
			Directory::CreateDirectory(destDirName);
		}

		//Получение файлов каталога и копирование их на новое место
		array<FileInfo^>^ files = dir->GetFiles();
		for each (FileInfo ^ file in files)
		{
			String^ temppath = Path::Combine(destDirName, file->Name);
			file->CopyTo(temppath, true);
		}

		//При копировании подкаталогов, то копировать их и их содержимое в новое место
		if (copySubDirs)
		{
			for each (DirectoryInfo ^ subdir in dirs)
			{
				String^ temppath = Path::Combine(destDirName, subdir->Name);
				DirectoryCopy(subdir->FullName, temppath, copySubDirs);
			}
		}
		GetDirs(delnode);


	}
	private: System::Void textFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Счётчик
		int i = 2;
		//Запоминания полного пути для создания папки в стринговую переменную
		String^ DirectoryFile = treeView1->SelectedNode->FullPath;
		String^ DirFileName = "Новый текстовый документ";

		DirectoryInfo^ file = gcnew DirectoryInfo(treeView1->SelectedNode->FullPath);
		array<FileInfo^>^ files = file->GetFiles();

		StringBuilder^ strBuilder = gcnew StringBuilder(DirFileName);

		for each (FileInfo ^ FileName in files)
		{
			if (DirFileName + ".txt" == FileName->Name)
			{

				strBuilder->Append(i.ToString());
				DirFileName = strBuilder->ToString();
				i++;
			}
		}

		//Если каталог не существует, то создаём новый каталог
		if (!File::Exists(DirectoryFile + "\\" + DirFileName + ".txt"))
		{
			File::Create(DirectoryFile + "\\" + DirFileName + ".txt");
			listView1->Items->Add(DirFileName + ".txt");
			GetDirs(delnode);
			i = listView1->Items->Count - 1;
			listView1->Items[i]->Selected = true;
			listView1->SelectedItems[0]->BeginEdit();
		}
	}

	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pole = 1;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Pole = 2;
	}
	private: System::Void listView2_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
		for each (ListViewItem ^ lvi in listView2->SelectedItems)
		{
			String^ ext = Path::GetExtension(lvi->Text)->ToLower();
			String^ fullPath = treeView1->SelectedNode->FullPath;
			if (ext == ".txt" || ext == ".htm" || ext == ".html")
			{
				try
				{
					//richTextBox1->LoadFile(Path::Combine(fullPath, lvi->Text),RichTextBoxStreamType::PlainText);

					//toolStrip1->Text = lvi->Text;
				}
				catch (...)
				{
					return;
				}
			}
			else if (ext == ".rtf")
			{
				try
				{
					//richTextBox1->LoadFile(Path::Combine(fullPath, lvi->Text),RichTextBoxStreamType::RichText);

					//toolStrip1->Text = lvi->Text;
				}
				catch (...)
				{
					return;
				}
			}
		}

	}
	private: System::Void listView2_AfterLabelEdit(System::Object^ sender, System::Windows::Forms::LabelEditEventArgs^ e) {
		if (e->Label != nullptr)
		{
			if (e->Label->Length > 0)
			{
				array <Char>^ temp = { '/','*','?','|', '\\', '<', '>','"' };
				if (e->Label->IndexOfAny(temp) == -1)
				{
					try
					{
						Directory::Move(treeView1->SelectedNode->FullPath + "\\" + listView2->SelectedItems[0]->Text, treeView1->SelectedNode->FullPath + "\\" + e->Label->ToString());
						GetDirs(delnode);
					}
					catch (...)
					{
						MessageBox::Show("Проверьте правильность ввода имени", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else
				{
					e->CancelEdit = true;
					MessageBox::Show("Имя папки(файла) не должно содержать следующих знаков: \/:*?<>|", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				e->CancelEdit = true;
				MessageBox::Show("Имя папки(файла) не может быть пустым.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void listView2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void replace(System::Object^ sender, System::EventArgs^ e) {
		//копирование
		PathForDel = sourcePath = treeView1->SelectedNode->FullPath;
		if (listView1->SelectedItems->Count != 0)
		{
			fileName = listView1->SelectedItems[0]->Text;
			OneFile = true;
		}
		else if (listView2->SelectedItems->Count != 0)
		{
			fileName = listView2->SelectedItems[0]->Text;
			OneFile = true;
		}
		else
		{
			MessageBox::Show("Выберите файл!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		signal = 1; //сигнал для удаления
	}
	}
	;

}