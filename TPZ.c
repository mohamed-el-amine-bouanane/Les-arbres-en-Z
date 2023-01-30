  /**--------------------------------------------------------**/
  /**       C o n v e r s i o n   Z vers C (Standard)        **/
  /**             Réalisée par Pr D.E ZEGOUR                 **/
  /**             E S I - Alger                              **/
  /**             Copywrite 2014                             **/
  /**--------------------------------------------------------**/

  #include <stdio.h>
  #include <stdlib.h>

  typedef char * string255 ;
  typedef char * string2 ;


  /** Implémentation **\: TABLEAU DE ARBRES BINAIRES DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tssic Type_Tssic  ;
  typedef Type_Tssic * Typestr_Tssic ;
  typedef string255 Type1_Tssic  ;
  typedef string255 Type2_Tssic  ;
  typedef int Type3_Tssic  ;
  typedef string2 Type4_Tssic  ;
  struct Tssic
    {
      Type1_Tssic Champ1 ;
      Type2_Tssic Champ2 ;
      Type3_Tssic Champ3 ;
      Type4_Tssic Champ4 ;
    };

  Type1_Tssic Struct1_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ1 ;
    }

  Type2_Tssic Struct2_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ2 ;
    }

  Type3_Tssic Struct3_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ3 ;
    }

  Type4_Tssic Struct4_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ4 ;
    }

  void Aff_struct1_Tssic ( Typestr_Tssic S, Type1_Tssic Val )
    {
      strcpy( S->Champ1 , Val );
    }

  void Aff_struct2_Tssic ( Typestr_Tssic S, Type2_Tssic Val )
    {
      strcpy( S->Champ2 , Val );
    }

  void Aff_struct3_Tssic ( Typestr_Tssic S, Type3_Tssic Val )
    {
       S->Champ3 = Val ;
    }

  void Aff_struct4_Tssic ( Typestr_Tssic S, Type4_Tssic Val )
    {
      strcpy( S->Champ4 , Val );
    }


  /** Arbres de recherche binaire **/

  typedef Typestr_Tssic Typeelem_ATssic   ;
  typedef struct Noeud_ATssic * Pointeur_ATssic ;

  struct Noeud_ATssic
    {
      Typeelem_ATssic  Val ;
      Pointeur_ATssic Fg ;
      Pointeur_ATssic Fd ;
      Pointeur_ATssic Pere ;
     } ;

  Typeelem_ATssic Info_ATssic( Pointeur_ATssic P )
    { return P->Val;   }

  Pointeur_ATssic Fg_ATssic( Pointeur_ATssic P)
    { return P->Fg ; }

  Pointeur_ATssic Fd_ATssic( Pointeur_ATssic P)
    { return P->Fd ; }

  Pointeur_ATssic Pere_ATssic( Pointeur_ATssic P)
    { return P->Pere ; }

  void Aff_info_ATssic ( Pointeur_ATssic P, Typeelem_ATssic Val)
    {
      Typeelem_ATssic _Temp ;
      _Temp = malloc(sizeof(Type_Tssic));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      _Temp->Champ2 = malloc(255 * sizeof(char));
      _Temp->Champ4 = malloc(2 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      strcpy(_Temp->Champ2, Val->Champ2);
      _Temp->Champ3 = Val->Champ3;
      strcpy(_Temp->Champ4, Val->Champ4);
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATssic( Pointeur_ATssic *P)
    {
      *P = (struct Noeud_ATssic *) malloc( sizeof( struct Noeud_ATssic))   ;
      (*P)->Val = malloc(sizeof(Type_Tssic));
      (*P)->Val->Champ1 = malloc( 255 * sizeof(char));
      (*P)->Val->Champ2 = malloc( 255 * sizeof(char));
      (*P)->Val->Champ4 = malloc( 2 * sizeof(char));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATssic( Pointeur_ATssic P)
    { free( P ) ; }


  /** Tableaux **/

  typedef Pointeur_ATssic Typeelem_V10ATssic ;
  typedef Typeelem_V10ATssic * Typevect_V10ATssic ;

  Typeelem_V10ATssic Element_V10ATssic ( Typevect_V10ATssic V , int I1  )
    {
      return  *(V + I1-1 ) ;
    }

  void Aff_element_V10ATssic ( Typevect_V10ATssic V  , int I1 ,  Typeelem_V10ATssic Val )
    {
      *(V + I1-1 ) = Val ;
    }


  /** Implémentation **\: ARBRE BINAIRE DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tiic Type_Tiic  ;
  typedef Type_Tiic * Typestr_Tiic ;
  typedef int Type1_Tiic  ;
  typedef int Type2_Tiic  ;
  typedef string2 Type3_Tiic  ;
  struct Tiic
    {
      Type1_Tiic Champ1 ;
      Type2_Tiic Champ2 ;
      Type3_Tiic Champ3 ;
    };

  Type1_Tiic Struct1_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ1 ;
    }

  Type2_Tiic Struct2_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ2 ;
    }

  Type3_Tiic Struct3_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ3 ;
    }

  void Aff_struct1_Tiic ( Typestr_Tiic S, Type1_Tiic Val )
    {
       S->Champ1 = Val ;
    }

  void Aff_struct2_Tiic ( Typestr_Tiic S, Type2_Tiic Val )
    {
       S->Champ2 = Val ;
    }

  void Aff_struct3_Tiic ( Typestr_Tiic S, Type3_Tiic Val )
    {
      strcpy( S->Champ3 , Val );
    }


  /** Arbres de recherche binaire **/

  typedef Typestr_Tiic Typeelem_ATiic   ;
  typedef struct Noeud_ATiic * Pointeur_ATiic ;

  struct Noeud_ATiic
    {
      Typeelem_ATiic  Val ;
      Pointeur_ATiic Fg ;
      Pointeur_ATiic Fd ;
      Pointeur_ATiic Pere ;
     } ;

  Typeelem_ATiic Info_ATiic( Pointeur_ATiic P )
    { return P->Val;   }

  Pointeur_ATiic Fg_ATiic( Pointeur_ATiic P)
    { return P->Fg ; }

  Pointeur_ATiic Fd_ATiic( Pointeur_ATiic P)
    { return P->Fd ; }

  Pointeur_ATiic Pere_ATiic( Pointeur_ATiic P)
    { return P->Pere ; }

  void Aff_info_ATiic ( Pointeur_ATiic P, Typeelem_ATiic Val)
    {
      Typeelem_ATiic _Temp ;
      _Temp = malloc(sizeof(Type_Tiic));
      _Temp->Champ3 = malloc(2 * sizeof(char));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      strcpy(_Temp->Champ3, Val->Champ3);
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATiic( Pointeur_ATiic *P)
    {
      *P = (struct Noeud_ATiic *) malloc( sizeof( struct Noeud_ATiic))   ;
      (*P)->Val = malloc(sizeof(Type_Tiic));
      (*P)->Val->Champ3 = malloc( 2 * sizeof(char));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATiic( Pointeur_ATiic P)
    { free( P ) ; }


  /** Variables du programme principal **/
  Typevect_V10ATssic T;
  Pointeur_ATssic P;
  Pointeur_ATiic Tree;
  int Choix;
  int Total_des_cas;
  string2 C;
  int A;
  int B;
  int End;
  Pointeur_ATiic _Px1;
  Pointeur_ATiic _Px2;

  /** Fonctions standards **/

  char  *Aleachaine ( int N )
    {
      int k;
      char  * Chaine = malloc(N+1);

      char Chr1[26] = "abcdefghijklmnopqrstuvwxyz";
      char Chr2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

      for (k=0;k<N; k++)
        switch ( rand() % 2 ){
        case 0 :  *(Chaine+k) = Chr1[rand() % 26] ; break ;
        case 1 :  *(Chaine+k) = Chr2[rand() % 26] ; break ;
        }
      Chaine[k] =  '\0' ;

      return (Chaine);
    }

  int Aleanombre( int N )
    { return ( rand() % N ); }


  /** Prototypes des fonctions **/

  void Create_fg (Pointeur_ATssic *Tete);
  void Create_fg2 (Pointeur_ATiic *Tete);
  void Create_fd (Pointeur_ATssic *Tete);
  void Create_fd2 (Pointeur_ATiic *Tete);
  void Insert_noeud (Pointeur_ATssic *Tete , int *V , int *M);
  void Create_tree (Pointeur_ATssic *Tete , int *M , int *I);
  void Parcours_inordre (Pointeur_ATssic *Tete);
  void Parcours_inordre2 (Pointeur_ATiic *Tete);
  void Create_forest (Typevect_V10ATssic *Tab);
  void Afficher (Typevect_V10ATssic *Tab);
  void Insert_element2 (Pointeur_ATiic *Head , int *V , string2 *Result , Pointeur_ATiic *U);
  void Insert_tree2 (Pointeur_ATiic *Tete1 , Pointeur_ATssic *Tete2 , int *Peuple);
  void Global2 (Pointeur_ATiic *Tree , Typevect_V10ATssic *Tab , int *Population);
  void Insert_element (Pointeur_ATiic *Head , int *V , string2 *Result);
  void Insert_tree (Pointeur_ATiic *Tete1 , Pointeur_ATssic *Tete2 , int *Peuple);
  void Global (Pointeur_ATiic *Tree , Typevect_V10ATssic *Tab , int *Population);
  void Locate_intervalle1 (Pointeur_ATiic *Head , int *Inf , int *Sup , string2 *Res , int *Nombre);
  void Prctg_intervalle1 (Pointeur_ATiic *Head , int *Minimum , int *Maximum , string2 *Res , int *Total , int *Pourcentage);
  void Locate_intervalle2 (Pointeur_ATiic *Head , int *Inf , int *Sup , int *Nombre);
  void Prctg_intervalle2 (Pointeur_ATiic *Head , int *Minimum , int *Maximum , string2 *Res , int *Total , int *Pourcentage);

  void Create_fg (Pointeur_ATssic *Tete)
    {
      /** Variables locales **/
      Pointeur_ATssic Teteg;

      /** Corps du module **/
     Creernoeud_ATssic (& Teteg ) ;
     Aff_fg_ATssic ( Teteg , NULL ) ;
     Aff_fd_ATssic ( Teteg , NULL ) ;
     Aff_fg_ATssic ( *Tete , Teteg ) ;

    }
  void Create_fg2 (Pointeur_ATiic *Tete)
    {
      /** Variables locales **/
      Pointeur_ATiic Teteg;

      /** Corps du module **/
     Creernoeud_ATiic (& Teteg ) ;
     Aff_fg_ATiic ( Teteg , NULL ) ;
     Aff_fd_ATiic ( Teteg , NULL ) ;
     Aff_fg_ATiic ( *Tete , Teteg ) ;

    }
  void Create_fd (Pointeur_ATssic *Tete)
    {
      /** Variables locales **/
      Pointeur_ATssic Teted;

      /** Corps du module **/
     Creernoeud_ATssic (& Teted ) ;
     Aff_fg_ATssic ( Teted , NULL ) ;
     Aff_fd_ATssic ( Teted , NULL ) ;
     Aff_fd_ATssic ( *Tete , Teted ) ;

    }
  void Create_fd2 (Pointeur_ATiic *Tete)
    {
      /** Variables locales **/
      Pointeur_ATiic Teted;

      /** Corps du module **/
     Creernoeud_ATiic (& Teted ) ;
     Aff_fg_ATiic ( Teted , NULL ) ;
     Aff_fd_ATiic ( Teted , NULL ) ;
     Aff_fd_ATiic ( *Tete , Teted ) ;

    }
  void Insert_noeud (Pointeur_ATssic *Tete , int *V , int *M)
    {
      /** Variables locales **/
      Typestr_Tssic B;
      int N;
      Pointeur_ATssic _Px1;
      Pointeur_ATssic _Px2;

      /** Corps du module **/
     B = malloc(sizeof(Type_Tssic));
     B->Champ1 = malloc(255 * sizeof(char));
     B->Champ2 = malloc(255 * sizeof(char));
     B->Champ4 = malloc(2 * sizeof(char));
      /* Affectation globale de structure */
     strcpy(B->Champ1,   Info_ATssic ( *Tete )->Champ1);
     strcpy(B->Champ2,   Info_ATssic ( *Tete )->Champ2);
     B->Champ3 =   Info_ATssic ( *Tete )->Champ3;
     strcpy(B->Champ4,   Info_ATssic ( *Tete )->Champ4);
 ;
     if( ( *V < Struct3_Tssic ( B  ) )) {
       if( ( Fg_ATssic ( *Tete ) == NULL )) {
         Create_fg ( & *Tete ) ;
         Aff_struct1_Tssic ( B  , Aleachaine(10 ) ) ;
         Aff_struct2_Tssic ( B  , Aleachaine(10 ) ) ;
         N  =  Aleanombre(2 ) ;
         if( ( N == 0 )) {
           Aff_struct4_Tssic ( B  , "D" ) ;
           }
         else
           {
           Aff_struct4_Tssic ( B  , "R" ) ;

         } ;
         Aff_struct3_Tssic ( B  , *V ) ;
         Aff_info_ATssic ( Fg_ATssic ( *Tete ) , B ) ;
         *M  =  ( *M - 1 ) ;
         }
       else
         {
         _Px1 =  Fg_ATssic ( *Tete ) ;
         Insert_noeud ( &_Px1, & *V , & *M ) ;

       } ;
       }
     else
       {
       if( ( Struct3_Tssic ( B  ) < *V )) {
         if( ( Fd_ATssic ( *Tete ) == NULL )) {
           Create_fd ( & *Tete ) ;
           Aff_struct1_Tssic ( B  , Aleachaine(10 ) ) ;
           Aff_struct2_Tssic ( B  , Aleachaine(10 ) ) ;
           N  =  Aleanombre(2 ) ;
           if( ( N == 0 )) {
             Aff_struct4_Tssic ( B  , "D" ) ;
             }
           else
             {
             Aff_struct4_Tssic ( B  , "R" ) ;

           } ;
           Aff_struct3_Tssic ( B  , *V ) ;
           Aff_info_ATssic ( Fd_ATssic ( *Tete ) , B ) ;
           *M  =  ( *M - 1 ) ;
           }
         else
           {
           _Px2 =  Fd_ATssic ( *Tete ) ;
           Insert_noeud ( &_Px2, & *V , & *M ) ;

         } ;

       } ;

     } ;

    }
  void Create_tree (Pointeur_ATssic *Tete , int *M , int *I)
    {
      /** Variables locales **/
      Typestr_Tssic S;
      Pointeur_ATssic P;
      int O;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tssic));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     S->Champ4 = malloc(2 * sizeof(char));
     if( ( *M != 0 )) {
       Creernoeud_ATssic (& *Tete ) ;
       Aff_element_V10ATssic ( T , *I   , *Tete ) ;
       Aff_fg_ATssic ( Element_V10ATssic ( T , *I   ) , NULL ) ;
       Aff_fd_ATssic ( Element_V10ATssic ( T , *I   ) , NULL ) ;
       Aff_struct1_Tssic ( S  , Aleachaine(10 ) ) ;
       Aff_struct2_Tssic ( S  , Aleachaine(10 ) ) ;
       O  =  Aleanombre(2 ) ;
       if( ( O == 0 )) {
         Aff_struct4_Tssic ( S  , "D" ) ;
         }
       else
         {
         Aff_struct4_Tssic ( S  , "R" ) ;

       } ;
       O  =  Aleanombre(100 ) ;
       while( ( O == 0 )) {
         O  =  Aleanombre(100 ) ;

       } ;
       Aff_struct3_Tssic ( S  , O ) ;
       Aff_info_ATssic ( *Tete , S ) ;
       *M  =  ( *M - 1 ) ;
       while( ( *M != 0 )) {
         O  =  Aleanombre(100 ) ;
         if( ( O != 0 )) {
           Insert_noeud ( & *Tete , & O , & *M ) ;

         } ;

       } ;

     } ;

    }
  void Parcours_inordre (Pointeur_ATssic *Tete)
    {
      /** Variables locales **/
      Pointeur_ATssic _Px1;
      Type_Tssic _Struct_Temp1;
      Pointeur_ATssic _Px2;

      /** Corps du module **/
     if( ( *Tete != NULL )) {
       _Px1 =  Fg_ATssic ( *Tete ) ;
       Parcours_inordre ( &_Px1) ;
       /** Ecriture d'une structure */
       _Struct_Temp1 = *Info_ATssic(*Tete);
       printf ( " %s", _Struct_Temp1.Champ1 );
       printf ( " %s", _Struct_Temp1.Champ2 );
       printf ( " %d", _Struct_Temp1.Champ3 );
       printf ( " %s\n", _Struct_Temp1.Champ4 ) ;
       printf ( " %s", "-----------------\n" ) ;
       _Px2 =  Fd_ATssic ( *Tete ) ;
       Parcours_inordre ( &_Px2) ;

     } ;

    }
  void Parcours_inordre2 (Pointeur_ATiic *Tete)
    {
      /** Variables locales **/
      Pointeur_ATiic _Px1;
      Type_Tiic _Struct_Temp2;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     if( ( *Tete != NULL )) {
       _Px1 =  Fg_ATiic ( *Tete ) ;
       Parcours_inordre2 ( &_Px1) ;
       /** Ecriture d'une structure */
       _Struct_Temp2 = *Info_ATiic(*Tete);
       printf ( " %d", _Struct_Temp2.Champ1 );
       printf ( " %d", _Struct_Temp2.Champ2 );
       printf ( " %s\n", _Struct_Temp2.Champ3 ) ;
       printf ( " %s", "-----------------\n" ) ;
       _Px2 =  Fd_ATiic ( *Tete ) ;
       Parcours_inordre2 ( &_Px2) ;

     } ;

    }
  void Create_forest (Typevect_V10ATssic *Tab)
    {
      /** Variables locales **/
      int I;
      Pointeur_ATssic _Px1;
      int _Px2;

      /** Corps du module **/
     I  =  1 ;
     while( ( I != 11 )) {
       Aff_element_V10ATssic ( *Tab , I   , NULL ) ;
       _Px1 =  Element_V10ATssic ( *Tab , I   ) ;
       _Px2 =  20 ;
       Create_tree ( &_Px1, &_Px2, & I ) ;
       I  =  ( I + 1 ) ;

     } ;

    }
  void Afficher (Typevect_V10ATssic *Tab)
    {
      /** Variables locales **/
      int I;
      Pointeur_ATssic _Px1;

      /** Corps du module **/
     I  =  1 ;
     while( ( I != 11 )) {
       printf("Pays %d :\n",I);
       printf ( " %s", "****************************************\n" ) ;
       _Px1 =  Element_V10ATssic ( *Tab , I   ) ;
       Parcours_inordre ( &_Px1) ;
       printf ( " %s", "****************************************\n" ) ;
       I  =  ( I + 1 ) ;

     } ;

    }
  void Insert_element2 (Pointeur_ATiic *Head , int *V , string2 *Result , Pointeur_ATiic *U)
    {
      /** Variables locales **/
      Pointeur_ATiic P;
      Typestr_Tiic B;
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     B = malloc(sizeof(Type_Tiic));
     B->Champ3 = malloc(2 * sizeof(char));
     if( ( *Head == NULL )) {
       Creernoeud_ATiic (& *Head ) ;
       Aff_fg_ATiic ( *Head , NULL ) ;
       Aff_fd_ATiic ( *Head , NULL ) ;
       Aff_struct1_Tiic ( B  , *V ) ;
       Aff_struct2_Tiic ( B  , 1 ) ;
       Aff_struct3_Tiic ( B  , *Result ) ;
       Aff_info_ATiic ( *Head , B ) ;
       *U  =  *Head ;
       }
     else
       {
      /* Affectation globale de structure */
       B->Champ1 =   Info_ATiic ( *Head )->Champ1;
       B->Champ2 =   Info_ATiic ( *Head )->Champ2;
       strcpy(B->Champ3,   Info_ATiic ( *Head )->Champ3);
 ;
       if( ( *V < Struct1_Tiic ( B  ) )) {
         if( ( Fg_ATiic ( *Head ) == NULL )) {
           Create_fg2 ( & *Head ) ;
           Aff_struct1_Tiic ( B  , *V ) ;
           Aff_struct2_Tiic ( B  , 1 ) ;
           Aff_struct3_Tiic ( B  , *Result ) ;
           Aff_info_ATiic ( Fg_ATiic ( *Head ) , B ) ;
           }
         else
           {
           _Px1 =  Fg_ATiic ( *Head ) ;
           Insert_element2 ( &_Px1, & *V , & *Result , & *U ) ;

         } ;
         }
       else
         {
         if( ( Struct1_Tiic ( B  ) < *V )) {
           if( ( Fd_ATiic ( *Head ) == NULL )) {
             Create_fd2 ( & *Head ) ;
             Aff_struct1_Tiic ( B  , *V ) ;
             Aff_struct2_Tiic ( B  , 1 ) ;
             Aff_struct3_Tiic ( B  , *Result ) ;
             Aff_info_ATiic ( Fd_ATiic ( *Head ) , B ) ;
             }
           else
             {
             _Px2 =  Fd_ATiic ( *Head ) ;
             Insert_element2 ( &_Px2, & *V , & *Result , & *U ) ;

           } ;
           }
         else
           {
           Aff_struct2_Tiic ( B  , Struct2_Tiic ( B  ) + 1 ) ;
           Aff_info_ATiic ( *Head , B ) ;

         } ;

       } ;

     } ;

    }
  void Insert_tree2 (Pointeur_ATiic *Tete1 , Pointeur_ATssic *Tete2 , int *Peuple)
    {
      /** Variables locales **/
      Typestr_Tssic S;
      Pointeur_ATiic P;
      Pointeur_ATssic _Px1;
      Pointeur_ATiic _Px2;
      int _Px3;
      string2 _Px4;
      Pointeur_ATiic _Px5;
      int _Px6;
      string2 _Px7;
      Pointeur_ATssic _Px8;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tssic));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     S->Champ4 = malloc(2 * sizeof(char));
     _Px4 = malloc(2 * sizeof(char));
     _Px7 = malloc(2 * sizeof(char));
     if( ( *Tete2 != NULL )) {
       _Px1 =  Fg_ATssic ( *Tete2 ) ;
       Insert_tree2 ( & *Tete1 , &_Px1, & *Peuple ) ;
      /* Affectation globale de structure */
       strcpy(S->Champ1,   Info_ATssic ( *Tete2 )->Champ1);
       strcpy(S->Champ2,   Info_ATssic ( *Tete2 )->Champ2);
       S->Champ3 =   Info_ATssic ( *Tete2 )->Champ3;
       strcpy(S->Champ4,   Info_ATssic ( *Tete2 )->Champ4);
 ;
       if( (strcmp( Struct4_Tssic ( S  ), "R") == 0  )) {
         _Px2 =  Fg_ATiic ( *Tete1 ) ;
         _Px3 =  Struct3_Tssic ( S  ) ;
         strcpy(_Px4,  Struct4_Tssic ( S  ) );
         Insert_element2 ( &_Px2, &_Px3, &_Px4, & P ) ;
         *Peuple  =  *Peuple + 1 ;
         if( ( Fg_ATiic ( *Tete1 ) == NULL )) {
           Aff_fg_ATiic ( *Tete1 , P ) ;

         } ;
         }
       else
         {
         _Px5 =  Fd_ATiic ( *Tete1 ) ;
         _Px6 =  Struct3_Tssic ( S  ) ;
         strcpy(_Px7,  Struct4_Tssic ( S  ) );
         Insert_element2 ( &_Px5, &_Px6, &_Px7, & P ) ;
         *Peuple  =  *Peuple + 1 ;
         if( ( Fd_ATiic ( *Tete1 ) == NULL )) {
           Aff_fd_ATiic ( *Tete1 , P ) ;

         } ;

       } ;
       _Px8 =  Fd_ATssic ( *Tete2 ) ;
       Insert_tree2 ( & *Tete1 , &_Px8, & *Peuple ) ;

     } ;

    }
  void Global2 (Pointeur_ATiic *Tree , Typevect_V10ATssic *Tab , int *Population)
    {
      /** Variables locales **/
      int I;
      Pointeur_ATssic _Px1;

      /** Corps du module **/
     *Population  =  0 ;
     I  =  1 ;
     Creernoeud_ATiic (& *Tree ) ;
     Aff_fg_ATiic ( *Tree , NULL ) ;
     Aff_fd_ATiic ( *Tree , NULL ) ;
     while( ( I != 11 )) {
       _Px1 =  Element_V10ATssic ( *Tab , I   ) ;
       Insert_tree2 ( & *Tree , &_Px1, & *Population ) ;
       I  =  ( I + 1 ) ;

     } ;

    }
  void Insert_element (Pointeur_ATiic *Head , int *V , string2 *Result)
    {
      /** Variables locales **/
      Pointeur_ATiic P;
      Typestr_Tiic B;
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     B = malloc(sizeof(Type_Tiic));
     B->Champ3 = malloc(2 * sizeof(char));
     if( ( *Head == NULL )) {
       Creernoeud_ATiic (& *Head ) ;
       Aff_fg_ATiic ( *Head , NULL ) ;
       Aff_fd_ATiic ( *Head , NULL ) ;
       Aff_struct1_Tiic ( B  , *V ) ;
       Aff_struct2_Tiic ( B  , 1 ) ;
       Aff_struct3_Tiic ( B  , *Result ) ;
       Aff_info_ATiic ( *Head , B ) ;
       }
     else
       {
      /* Affectation globale de structure */
       B->Champ1 =   Info_ATiic ( *Head )->Champ1;
       B->Champ2 =   Info_ATiic ( *Head )->Champ2;
       strcpy(B->Champ3,   Info_ATiic ( *Head )->Champ3);
 ;
       if( ( *V < Struct1_Tiic ( B  ) )) {
         if( ( Fg_ATiic ( *Head ) == NULL )) {
           Create_fg2 ( & *Head ) ;
           Aff_struct1_Tiic ( B  , *V ) ;
           Aff_struct2_Tiic ( B  , 1 ) ;
           Aff_struct3_Tiic ( B  , *Result ) ;
           Aff_info_ATiic ( Fg_ATiic ( *Head ) , B ) ;
           }
         else
           {
           _Px1 =  Fg_ATiic ( *Head ) ;
           Insert_element ( &_Px1, & *V , & *Result ) ;

         } ;
         }
       else
         {
         if( ( Struct1_Tiic ( B  ) < *V )) {
           if( ( Fd_ATiic ( *Head ) == NULL )) {
             Create_fd2 ( & *Head ) ;
             Aff_struct1_Tiic ( B  , *V ) ;
             Aff_struct2_Tiic ( B  , 1 ) ;
             Aff_struct3_Tiic ( B  , *Result ) ;
             Aff_info_ATiic ( Fd_ATiic ( *Head ) , B ) ;
             }
           else
             {
             _Px2 =  Fd_ATiic ( *Head ) ;
             Insert_element ( &_Px2, & *V , & *Result ) ;

           } ;
           }
         else
           {
           if( (strcmp( *Result, Struct3_Tiic ( B  )) == 0  )) {
             Aff_struct2_Tiic ( B  , Struct2_Tiic ( B  ) + 1 ) ;
             Aff_info_ATiic ( *Head , B ) ;
             }
           else
             {
             if( (strcmp( *Result, "R") == 0  )) {
               if( ( Fg_ATiic ( *Head ) == NULL )) {
                 Create_fg2 ( & *Head ) ;
                 Aff_struct1_Tiic ( B  , *V ) ;
                 Aff_struct2_Tiic ( B  , 1 ) ;
                 Aff_struct3_Tiic ( B  , *Result ) ;
                 Aff_info_ATiic ( Fg_ATiic ( *Head ) , B ) ;
                 }
               else
                 {
                 P  =  Fg_ATiic ( *Head ) ;
      /* Affectation globale de structure */
                 B->Champ1 =   Info_ATiic ( P )->Champ1;
                 B->Champ2 =   Info_ATiic ( P )->Champ2;
                 strcpy(B->Champ3,   Info_ATiic ( P )->Champ3);
 ;
                 if( ( *V == Struct1_Tiic ( B  ) )) {
                   Aff_struct2_Tiic ( B  , Struct2_Tiic ( B  ) + 1 ) ;
                   Aff_info_ATiic ( P , B ) ;
                   }
                 else
                   {
                   Creernoeud_ATiic (& P ) ;
                   Aff_struct1_Tiic ( B  , *V ) ;
                   Aff_struct2_Tiic ( B  , 1 ) ;
                   Aff_struct3_Tiic ( B  , *Result ) ;
                   Aff_info_ATiic ( P , B ) ;
                   Aff_fd_ATiic ( P , NULL ) ;
                   Aff_fg_ATiic ( P , Fg_ATiic ( *Head ) ) ;
                   Aff_fg_ATiic ( *Head , P ) ;

                 } ;

               } ;
               }
             else
               {
               if( ( Fd_ATiic ( *Head ) == NULL )) {
                 Create_fd2 ( & *Head ) ;
                 Aff_struct1_Tiic ( B  , *V ) ;
                 Aff_struct2_Tiic ( B  , 1 ) ;
                 Aff_struct3_Tiic ( B  , *Result ) ;
                 Aff_info_ATiic ( Fd_ATiic ( *Head ) , B ) ;
                 }
               else
                 {
                 P  =  Fd_ATiic ( *Head ) ;
      /* Affectation globale de structure */
                 B->Champ1 =   Info_ATiic ( P )->Champ1;
                 B->Champ2 =   Info_ATiic ( P )->Champ2;
                 strcpy(B->Champ3,   Info_ATiic ( P )->Champ3);
 ;
                 if( ( *V == Struct1_Tiic ( B  ) )) {
                   Aff_struct2_Tiic ( B  , Struct2_Tiic ( B  ) + 1 ) ;
                   Aff_info_ATiic ( P , B ) ;
                   }
                 else
                   {
                   Creernoeud_ATiic (& P ) ;
                   Aff_struct1_Tiic ( B  , *V ) ;
                   Aff_struct2_Tiic ( B  , 1 ) ;
                   Aff_struct3_Tiic ( B  , *Result ) ;
                   Aff_info_ATiic ( P , B ) ;
                   Aff_fg_ATiic ( P , NULL ) ;
                   Aff_fd_ATiic ( P , Fd_ATiic ( *Head ) ) ;
                   Aff_fd_ATiic ( *Head , P ) ;

                 } ;

               } ;

             } ;

           } ;

         } ;

       } ;

     } ;

    }
  void Insert_tree (Pointeur_ATiic *Tete1 , Pointeur_ATssic *Tete2 , int *Peuple)
    {
      /** Variables locales **/
      Typestr_Tssic S;
      Pointeur_ATssic _Px1;
      int _Px2;
      string2 _Px3;
      Pointeur_ATssic _Px4;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tssic));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     S->Champ4 = malloc(2 * sizeof(char));
     _Px3 = malloc(2 * sizeof(char));
     if( ( *Tete2 != NULL )) {
       _Px1 =  Fg_ATssic ( *Tete2 ) ;
       Insert_tree ( & *Tete1 , &_Px1, & *Peuple ) ;
      /* Affectation globale de structure */
       strcpy(S->Champ1,   Info_ATssic ( *Tete2 )->Champ1);
       strcpy(S->Champ2,   Info_ATssic ( *Tete2 )->Champ2);
       S->Champ3 =   Info_ATssic ( *Tete2 )->Champ3;
       strcpy(S->Champ4,   Info_ATssic ( *Tete2 )->Champ4);
 ;
       _Px2 =  Struct3_Tssic ( S  ) ;
       strcpy(_Px3,  Struct4_Tssic ( S  ) );
       Insert_element ( & *Tete1 , &_Px2, &_Px3) ;
       *Peuple  =  *Peuple + 1 ;
       _Px4 =  Fd_ATssic ( *Tete2 ) ;
       Insert_tree ( & *Tete1 , &_Px4, & *Peuple ) ;

     } ;

    }
  void Global (Pointeur_ATiic *Tree , Typevect_V10ATssic *Tab , int *Population)
    {
      /** Variables locales **/
      int I;
      Pointeur_ATssic _Px1;

      /** Corps du module **/
     *Population  =  0 ;
     I  =  1 ;
     *Tree  =  NULL ;
     while( ( Element_V10ATssic ( *Tab , I   ) == NULL )) {
       I  =  ( I + 1 ) ;

     } ;
     while( ( I != 11 )) {
       _Px1 =  Element_V10ATssic ( *Tab , I   ) ;
       Insert_tree ( & *Tree , &_Px1, & *Population ) ;
       I  =  ( I + 1 ) ;

     } ;

    }
  void Locate_intervalle1 (Pointeur_ATiic *Head , int *Inf , int *Sup , string2 *Res , int *Nombre)
    {
      /** Variables locales **/
      Typestr_Tiic S;
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tiic));
     S->Champ3 = malloc(2 * sizeof(char));
     if( ( *Head != NULL )) {
       if( ( Struct1_Tiic ( Info_ATiic ( *Head )  ) > *Inf )) {
         _Px1 =  Fg_ATiic ( *Head ) ;
         Locate_intervalle1 ( &_Px1, & *Inf , & *Sup , & *Res , & *Nombre ) ;

       } ;
      /* Affectation globale de structure */
       S->Champ1 =   Info_ATiic ( *Head )->Champ1;
       S->Champ2 =   Info_ATiic ( *Head )->Champ2;
       strcpy(S->Champ3,   Info_ATiic ( *Head )->Champ3);
 ;
       if( ( ( (strcmp( Struct3_Tiic ( S  ), *Res) == 0  ) && ( Struct1_Tiic ( S  ) >= *Inf ) ) && ( Struct1_Tiic ( S  ) <= *Sup ) )) {
         *Nombre  =  *Nombre + Struct2_Tiic ( S  ) ;

       } ;
       if( ( Struct1_Tiic ( Info_ATiic ( *Head )  ) < *Sup )) {
         _Px2 =  Fd_ATiic ( *Head ) ;
         Locate_intervalle1 ( &_Px2, & *Inf , & *Sup , & *Res , & *Nombre ) ;

       } ;

     } ;

    }
  void Prctg_intervalle1 (Pointeur_ATiic *Head , int *Minimum , int *Maximum , string2 *Res , int *Total , int *Pourcentage)
    {

      /** Corps du module **/
     *Pourcentage  =  0 ;
     Locate_intervalle1 ( & *Head , & *Minimum , & *Maximum , & *Res , & *Pourcentage ) ;
     *Pourcentage  =  ( ( *Pourcentage * 100 ) / *Total ) ;

    }
  void Locate_intervalle2 (Pointeur_ATiic *Head , int *Inf , int *Sup , int *Nombre)
    {
      /** Variables locales **/
      Typestr_Tiic S;
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tiic));
     S->Champ3 = malloc(2 * sizeof(char));
     if( ( *Head != NULL )) {
       if( ( Struct1_Tiic ( Info_ATiic ( *Head )  ) > *Inf )) {
         _Px1 =  Fg_ATiic ( *Head ) ;
         Locate_intervalle2 ( &_Px1, & *Inf , & *Sup , & *Nombre ) ;

       } ;
      /* Affectation globale de structure */
       S->Champ1 =   Info_ATiic ( *Head )->Champ1;
       S->Champ2 =   Info_ATiic ( *Head )->Champ2;
       strcpy(S->Champ3,   Info_ATiic ( *Head )->Champ3);
 ;
       if( ( ( Struct1_Tiic ( S  ) >= *Inf ) && ( Struct1_Tiic ( S  ) <= *Sup ) )) {
         *Nombre  =  *Nombre + Struct2_Tiic ( S  ) ;

       } ;
       if( ( Struct1_Tiic ( Info_ATiic ( *Head )  ) < *Sup )) {
         _Px2 =  Fd_ATiic ( *Head ) ;
         Locate_intervalle2 ( &_Px2, & *Inf , & *Sup , & *Nombre ) ;

       } ;

     } ;

    }
  void Prctg_intervalle2 (Pointeur_ATiic *Head , int *Minimum , int *Maximum , string2 *Res , int *Total , int *Pourcentage)
    {
      /** Variables locales **/
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     *Pourcentage  =  0 ;
     if( (strcmp( *Res, "R") == 0  )) {
       _Px1 =  Fg_ATiic ( *Head ) ;
       Locate_intervalle2 ( &_Px1, & *Minimum , & *Maximum , & *Pourcentage ) ;
       }
     else
       {
       _Px2 =  Fd_ATiic ( *Head ) ;
       Locate_intervalle2 ( &_Px2, & *Minimum , & *Maximum , & *Pourcentage ) ;

     } ;
     *Pourcentage  =  ( ( *Pourcentage * 100 ) / *Total ) ;

    }

  int main(int argc, char *argv[])
    {
     T = malloc(10 * sizeof(Pointeur_ATssic));
     int _Izw2;for (_Izw2=0; _Izw2<10; ++_Izw2)
       T[_Izw2] = malloc( sizeof(Pointeur_ATssic ));
     C = malloc(2 * sizeof(char));
     Create_forest ( & T ) ;
     Afficher ( & T ) ;
     printf ( " %s", "Tapez 1 pour ordonner selon l age puis selon le resultat ou 2 pour l inverse : " ) ;
     scanf ( " %d", &Choix ) ;
     if( ( Choix == 1 )) {
       Global ( & Tree , & T , & Total_des_cas ) ;
       Parcours_inordre2 ( & Tree ) ;
       printf ( " %s", "Entrez le résultat :" ) ;
       scanf ( " %s", C ) ;
       printf ( " %s", "Entrez votre intervalle :" ) ;
       scanf ( " %d", &A ) ;
       scanf ( " %d", &B ) ;
       Prctg_intervalle1 ( & Tree , & A , & B , & C , & Total_des_cas , & End ) ;
       printf ( " %d", End );
       printf ( " %s", "%" ) ;
       }
     else
       {
       if( ( Choix == 2 )) {
         Global2 ( & Tree , & T , & Total_des_cas ) ;
         _Px1 =  Fg_ATiic ( Tree ) ;
         Parcours_inordre2 ( &_Px1) ;
         _Px2 =  Fd_ATiic ( Tree ) ;
         Parcours_inordre2 ( &_Px2) ;
         printf ( " %s", "Entrez le resultat :" ) ;
         scanf ( " %s", C ) ;
         printf ( " %s", "Entrez votre intervalle :\n" ) ;
         printf("Minimum = ");
         scanf ( " %d", &A ) ;
         printf("Maximum = ");
         scanf ( " %d", &B ) ;
         Prctg_intervalle2 ( & Tree , & A , & B , & C , & Total_des_cas , & End ) ;
         printf ( " %d", End );
         printf ( " %s", "%" ) ;
         }
       else
         {
         printf ( " %s", "Erreur" ) ;

       } ;

     } ;


      system("PAUSE");
      return 0;
    }
