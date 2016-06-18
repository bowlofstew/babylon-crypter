
// Babylon CrypterDialog.h : fichier d'en-t�te
//

#pragma once


// bo�te de dialogue CBabylonCrypterDialog
class CBabylonCrypterDialog : public CDialogEx
{
// Construction
public:
	CBabylonCrypterDialog(CWnd* pParent = NULL);	// constructeur standard

// Donn�es de bo�te de dialogue
	enum 
	{
		IDD = IDD_BABYLONCRYPTER_DIALOG 
	};

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV


// Impl�mentation
protected:
	HICON m_hIcon;

	// Fonctions g�n�r�es de la table des messages
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLoadfileButton();



private:

	char m_Stub_Path[MAX_PATH];
    char m_File_Path[MAX_PATH];
	char m_Icon_Path[MAX_PATH];
	char m_Save_Path[MAX_PATH];
	BuildWorker * worker;
	
	

public:
	afx_msg void OnBnClickedLoadstubButton();
	afx_msg void OnBnClickedCryptButton();
	afx_msg void OnBnClickedLoadiconButton();
};
