#pragma once
#pragma once


namespace Ns_pjt_MonProfil
{
	ref class MonProfil

	{
	private:

		System::String^ sSql;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ Matricule;
		System::String^ Email;
		System::String^ NumeroTelephone;
		System::String^ DateEmbauche;
		System::String^ DateNaissance;

	public:

		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Update(void);
		void setMatricule(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setEmail(System::String^);
		void setNumeroTelephone(System::String^);
		void setDateEmbauche(System::String^);
		void setDateNaissance(System::String^);
		System::String^ getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getEmail(void);
		System::String^ getTelephone(void);
		System::String^ getDateEmbauche(void);
		System::String^ getDateNaissance(void);

	};
}

