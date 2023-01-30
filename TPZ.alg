
   SOIENT
       T UN TABLEAU ( 10 ) DE ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       P UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       Tree UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Create_tree UNE ACTION ;
       Create_fg UNE ACTION ;
       Create_fg2 UNE ACTION ;
       Create_fd UNE ACTION ;
       Create_fd2 UNE ACTION ;
       Insert_noeud UNE ACTION ;
       Parcours_inordre UNE ACTION ;
       Create_forest UNE ACTION ;
       Afficher UNE ACTION ;
       Parcours_inordre2 UNE ACTION ;
       Insert_element2 UNE ACTION ;
       Insert_tree2 UNE ACTION ;
       Global2 UNE ACTION ;
       Insert_element UNE ACTION ;
       Insert_tree UNE ACTION ;
       Global UNE ACTION ;
       Choix UN ENTIER ;
       Total_des_cas UN ENTIER ;
       Locate_intervalle1 UNE ACTION ;
       Prctg_intervalle1 UNE ACTION ;
       Locate_intervalle2 UNE ACTION ;
       Prctg_intervalle2 UNE ACTION ;
       c un car;
       a,b des entiers;
       End UN ENTIER ;
      
   DEBUT
       APPEL Create_forest ( T ) ;
       APPEL Afficher ( T ) ;
       ECRIRE ( 'Tapez 1 pour ordonner selon l age puis selon le resultat ou 2 pour l inverse' ) ;
       LIRE ( Choix ) ;
       SI ( Choix = 1 )
           APPEL Global ( Tree , T , Total_des_cas ) ;
           APPEL Parcours_inordre2 ( Tree ) ;
           Ecrire('Entrez le résultat :');
           Lire(c);
           Ecrire('Entrez votre intervalle :');
           Lire(a);
           Lire(b);
           APPEL Prctg_intervalle1 ( Tree , a , b , c , Total_des_cas , End ) ;
           ECRIRE ( End,'%' ) ;
          
       SINON
           SI ( Choix = 2 )
               APPEL Global2 ( Tree , T , Total_des_cas ) ;
               APPEL Parcours_inordre2 ( FG ( Tree ) ) ;
               APPEL Parcours_inordre2 ( FD ( Tree ) ) ;
               Ecrire('Entrez le résultat :');
               Lire(c);
               Ecrire('Entrez votre intervalle :');
               Lire(a);
               Lire(b);
               APPEL Prctg_intervalle2 ( Tree , a , b , c , Total_des_cas , End ) ;
               ECRIRE ( End,'%' ) ;
              
           SINON
               ECRIRE ( 'Erreur' ) ;
              
           FSI ;
          
       FSI ;
      
   FIN
   ACTION Create_fg ( Tete )
   SOIENT
       Tete UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       Teteg UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
      
   DEBUT
       CREERNOEUD ( Teteg ) ;
       AFF_FG ( Teteg , NIL ) ;
       AFF_FD ( Teteg , NIL ) ;
       AFF_FG ( Tete , Teteg ) ;
      
   FIN
   ACTION Create_fg2 ( Tete )
   SOIENT
       Tete UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Teteg UN ARB DE ( ENTIER , ENTIER , CAR ) ;
      
   DEBUT
       CREERNOEUD ( Teteg ) ;
       AFF_FG ( Teteg , NIL ) ;
       AFF_FD ( Teteg , NIL ) ;
       AFF_FG ( Tete , Teteg ) ;
      
   FIN
   ACTION Create_fd ( Tete )
   SOIENT
       Tete UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       Teted UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
      
   DEBUT
       CREERNOEUD ( Teted ) ;
       AFF_FG ( Teted , NIL ) ;
       AFF_FD ( Teted , NIL ) ;
       AFF_FD ( Tete , Teted ) ;
      
   FIN
   ACTION Create_fd2 ( Tete )
   SOIENT
       Tete UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Teted UN ARB DE ( ENTIER , ENTIER , CAR ) ;
      
   DEBUT
       CREERNOEUD ( Teted ) ;
       AFF_FG ( Teted , NIL ) ;
       AFF_FD ( Teted , NIL ) ;
       AFF_FD ( Tete , Teted ) ;
      
   FIN
   ACTION Insert_noeud ( Tete , V , M )
   SOIENT
       Tete UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       B UNE STRUCTURE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       V UN ENTIER ;
       N UN ENTIER ;
       M UN ENTIER ;
      
   DEBUT
       B := INFO ( Tete ) ;
       SI ( V < STRUCT ( B , 3 ) )
           SI ( FG ( Tete ) = NIL )
               APPEL Create_fg ( Tete ) ;
               AFF_STRUCT ( B , 1 , ALEACHAINE ( 10 ) ) ;
               AFF_STRUCT ( B , 2 , ALEACHAINE ( 10 ) ) ;
               N := ALEANOMBRE ( 2 ) ;
               SI ( N = 0 )
                   AFF_STRUCT ( B , 4 , 'D' ) ;
                  
               SINON
                   AFF_STRUCT ( B , 4 , 'R' ) ;
                  
               FSI ;
               AFF_STRUCT ( B , 3 , V ) ;
               AFF_INFO ( FG ( Tete ) , B ) ;
               M := ( M - 1 ) ;
              
           SINON
               APPEL Insert_noeud ( FG ( Tete ) , V , M ) ;
              
           FSI ;
          
       SINON
           SI ( STRUCT ( B , 3 ) < V )
               SI ( FD ( Tete ) = NIL )
                   APPEL Create_fd ( Tete ) ;
                   AFF_STRUCT ( B , 1 , ALEACHAINE ( 10 ) ) ;
                   AFF_STRUCT ( B , 2 , ALEACHAINE ( 10 ) ) ;
                   N := ALEANOMBRE ( 2 ) ;
                   SI ( N = 0 )
                       AFF_STRUCT ( B , 4 , 'D' ) ;
                      
                   SINON
                       AFF_STRUCT ( B , 4 , 'R' ) ;
                      
                   FSI ;
                   AFF_STRUCT ( B , 3 , V ) ;
                   AFF_INFO ( FD ( Tete ) , B ) ;
                   M := ( M - 1 ) ;
                  
               SINON
                   APPEL Insert_noeud ( FD ( Tete ) , V , M ) ;
                  
               FSI ;
              
           FSI ;
          
       FSI ;
      
   FIN
   ACTION Create_tree ( Tete , M , I )
   SOIENT
       S UNE STRUCTURE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       P UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       Tete UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       M UN ENTIER ;
       O UN ENTIER ;
       I UN ENTIER ;
      
   DEBUT
       SI ( M <> 0 )
           CREERNOEUD ( Tete ) ;
           AFF_ELEMENT ( T [ I ] , Tete ) ;
           AFF_FG ( ELEMENT ( T [ I ] ) , NIL ) ;
           AFF_FD ( ELEMENT ( T [ I ] ) , NIL ) ;
           AFF_STRUCT ( S , 1 , ALEACHAINE ( 10 ) ) ;
           AFF_STRUCT ( S , 2 , ALEACHAINE ( 10 ) ) ;
           O := ALEANOMBRE ( 2 ) ;
           SI ( O = 0 )
               AFF_STRUCT ( S , 4 , 'D' ) ;
              
           SINON
               AFF_STRUCT ( S , 4 , 'R' ) ;
              
           FSI ;
           O := ALEANOMBRE ( 100 ) ;
           TQ ( O = 0 )
               O := ALEANOMBRE ( 100 ) ;
              
           FTQ ;
           AFF_STRUCT ( S , 3 , O ) ;
           AFF_INFO ( Tete , S ) ;
           M := ( M - 1 ) ;
           TQ ( M <> 0 )
               O := ALEANOMBRE ( 100 ) ;
               SI ( O <> 0 )
                   APPEL Insert_noeud ( Tete , O , M ) ;
                  
               FSI ;
              
           FTQ ;
          
       FSI ;
      
   FIN
   ACTION Parcours_inordre ( Tete )
   SOIENT
       Tete UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
      
   DEBUT
       SI ( Tete <> NIL )
           APPEL Parcours_inordre ( FG ( Tete ) ) ;
           ECRIRE ( INFO ( Tete ) ) ;
           ECRIRE ( '-----------------' ) ;
           APPEL Parcours_inordre ( FD ( Tete ) ) ;
          
       FSI ;
      
   FIN
   ACTION Parcours_inordre2 ( Tete )
   SOIENT
       Tete UN ARB DE ( ENTIER , ENTIER , CAR ) ;
      
   DEBUT
       SI ( Tete <> NIL )
           APPEL Parcours_inordre2 ( FG ( Tete ) ) ;
           ECRIRE ( INFO ( Tete ) ) ;
           ECRIRE ( '-----------------' ) ;
           APPEL Parcours_inordre2 ( FD ( Tete ) ) ;
          
       FSI ;
      
   FIN
   ACTION Create_forest ( Tab )
   SOIENT
       Tab UN TABLEAU ( 10 ) DE ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       I UN ENTIER ;
      
   DEBUT
       I := 1 ;
       TQ ( I <> 11 )
           AFF_ELEMENT ( Tab [ I ] , NIL ) ;
           APPEL Create_tree ( ELEMENT ( Tab [ I ] ) , 20 , I ) ;
           I := ( I + 1 ) ;
          
       FTQ ;
      
   FIN
   ACTION Afficher ( Tab )
   SOIENT
       Tab UN TABLEAU ( 10 ) DE ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       I UN ENTIER ;
      
   DEBUT
       I := 1 ;
       TQ ( I <> 11 )
           ECRIRE ( '****************************************' ) ;
           APPEL Parcours_inordre ( ELEMENT ( Tab [ I ] ) ) ;
           ECRIRE ( '****************************************' ) ;
           I := ( I + 1 ) ;
          
       FTQ ;
      
   FIN
   ACTION Insert_element2 ( Head , V , Result , U )
   SOIENT
       Head UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       P UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       U UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       B UNE STRUCTURE ( ENTIER , ENTIER , CAR ) ;
       V UN ENTIER ;
       Result UN CAR ;
      
   DEBUT
       SI ( Head = NIL )
           CREERNOEUD ( Head ) ;
           AFF_FG ( Head , NIL ) ;
           AFF_FD ( Head , NIL ) ;
           AFF_STRUCT ( B , 1 , V ) ;
           AFF_STRUCT ( B , 2 , 1 ) ;
           AFF_STRUCT ( B , 3 , Result ) ;
           AFF_INFO ( Head , B ) ;
           U := Head ;
          
       SINON
           B := INFO ( Head ) ;
           SI ( V < STRUCT ( B , 1 ) )
               SI ( FG ( Head ) = NIL )
                   APPEL Create_fg2 ( Head ) ;
                   AFF_STRUCT ( B , 1 , V ) ;
                   AFF_STRUCT ( B , 2 , 1 ) ;
                   AFF_STRUCT ( B , 3 , Result ) ;
                   AFF_INFO ( FG ( Head ) , B ) ;
                  
               SINON
                   APPEL Insert_element2 ( FG ( Head ) , V , Result , U ) ;
                  
               FSI ;
              
           SINON
               SI ( STRUCT ( B , 1 ) < V )
                   SI ( FD ( Head ) = NIL )
                       APPEL Create_fd2 ( Head ) ;
                       AFF_STRUCT ( B , 1 , V ) ;
                       AFF_STRUCT ( B , 2 , 1 ) ;
                       AFF_STRUCT ( B , 3 , Result ) ;
                       AFF_INFO ( FD ( Head ) , B ) ;
                      
                   SINON
                       APPEL Insert_element2 ( FD ( Head ) , V , Result , U ) ;
                      
                   FSI ;
                  
               SINON
                   AFF_STRUCT ( B , 2 , STRUCT ( B , 2 ) + 1 ) ;
                   AFF_INFO ( Head , B ) ;
                  
               FSI ;
              
           FSI ;
          
       FSI ;
      
   FIN
   ACTION Insert_tree2 ( Tete1 , Tete2 , Peuple )
   SOIENT
       Tete1 UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Tete2 UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       S UNE STRUCTURE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       P UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Peuple UN ENTIER ;
      
   DEBUT
       SI ( Tete2 <> NIL )
           APPEL Insert_tree2 ( Tete1 , FG ( Tete2 ) , Peuple ) ;
           S := INFO ( Tete2 ) ;
           SI ( STRUCT ( S , 4 ) = 'R' )
               APPEL Insert_element2 ( FG ( Tete1 ) , STRUCT ( S , 3 ) , STRUCT ( S , 4 ) , P ) ;
               Peuple := Peuple + 1 ;
               SI ( FG ( Tete1 ) = NIL )
                   AFF_FG ( Tete1 , P ) ;
                  
               FSI ;
              
           SINON
               APPEL Insert_element2 ( FD ( Tete1 ) , STRUCT ( S , 3 ) , STRUCT ( S , 4 ) , P ) ;
               Peuple := Peuple + 1 ;
               SI ( FD ( Tete1 ) = NIL )
                   AFF_FD ( Tete1 , P ) ;
                  
               FSI ;
              
           FSI ;
           APPEL Insert_tree2 ( Tete1 , FD ( Tete2 ) , Peuple ) ;
          
       FSI ;
      
   FIN
   ACTION Global2 ( Tree , Tab , Population )
   SOIENT
       Tree UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Tab UN TABLEAU ( 10 ) DE ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       I UN ENTIER ;
       Population UN ENTIER ;
      
   DEBUT
       Population := 0 ;
       I := 1 ;
       CREERNOEUD ( Tree ) ;
       AFF_FG ( Tree , NIL ) ;
       AFF_FD ( Tree , NIL ) ;
       TQ ( I <> 11 )
           APPEL Insert_tree2 ( Tree , ELEMENT ( Tab [ I ] ) , Population ) ;
           I := ( I + 1 ) ;
          
       FTQ ;
      
   FIN
   ACTION Insert_element ( Head , V , Result )
   SOIENT
       Head UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       P UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       B UNE STRUCTURE ( ENTIER , ENTIER , CAR ) ;
       V UN ENTIER ;
       Result UN CAR ;
      
   DEBUT
       SI ( Head = NIL )
           CREERNOEUD ( Head ) ;
           AFF_FG ( Head , NIL ) ;
           AFF_FD ( Head , NIL ) ;
           AFF_STRUCT ( B , 1 , V ) ;
           AFF_STRUCT ( B , 2 , 1 ) ;
           AFF_STRUCT ( B , 3 , Result ) ;
           AFF_INFO ( Head , B ) ;
          
       SINON
           B := INFO ( Head ) ;
           SI ( V < STRUCT ( B , 1 ) )
               SI ( FG ( Head ) = NIL )
                   APPEL Create_fg2 ( Head ) ;
                   AFF_STRUCT ( B , 1 , V ) ;
                   AFF_STRUCT ( B , 2 , 1 ) ;
                   AFF_STRUCT ( B , 3 , Result ) ;
                   AFF_INFO ( FG ( Head ) , B ) ;
                  
               SINON
                   APPEL Insert_element ( FG ( Head ) , V , Result ) ;
                  
               FSI ;
              
           SINON
               SI ( STRUCT ( B , 1 ) < V )
                   SI ( FD ( Head ) = NIL )
                       APPEL Create_fd2 ( Head ) ;
                       AFF_STRUCT ( B , 1 , V ) ;
                       AFF_STRUCT ( B , 2 , 1 ) ;
                       AFF_STRUCT ( B , 3 , Result ) ;
                       AFF_INFO ( FD ( Head ) , B ) ;
                      
                   SINON
                       APPEL Insert_element ( FD ( Head ) , V , Result ) ;
                      
                   FSI ;
                  
               SINON
                   SI ( Result = STRUCT ( B , 3 ) )
                       AFF_STRUCT ( B , 2 , STRUCT ( B , 2 ) + 1 ) ;
                       AFF_INFO ( Head , B ) ;
                      
                   SINON
                       SI ( Result = 'R' )
                           SI ( FG ( Head ) = NIL )
                               APPEL Create_fg2 ( Head ) ;
                               AFF_STRUCT ( B , 1 , V ) ;
                               AFF_STRUCT ( B , 2 , 1 ) ;
                               AFF_STRUCT ( B , 3 , Result ) ;
                               AFF_INFO ( FG ( Head ) , B ) ;
                              
                           SINON
                               P := FG ( Head ) ;
                               B := INFO ( P ) ;
                               SI ( V = STRUCT ( B , 1 ) )
                                   AFF_STRUCT ( B , 2 , STRUCT ( B , 2 ) + 1 ) ;
                                   AFF_INFO ( P , B ) ;
                                  
                               SINON
                                   CREERNOEUD ( P ) ;
                                   AFF_STRUCT ( B , 1 , V ) ;
                                   AFF_STRUCT ( B , 2 , 1 ) ;
                                   AFF_STRUCT ( B , 3 , Result ) ;
                                   AFF_INFO ( P , B ) ;
                                   AFF_FD ( P , NIL ) ;
                                   AFF_FG ( P , FG ( Head ) ) ;
                                   AFF_FG ( Head , P ) ;
                                  
                               FSI ;
                              
                           FSI ;
                          
                       SINON
                           SI ( FD ( Head ) = NIL )
                               APPEL Create_fd2 ( Head ) ;
                               AFF_STRUCT ( B , 1 , V ) ;
                               AFF_STRUCT ( B , 2 , 1 ) ;
                               AFF_STRUCT ( B , 3 , Result ) ;
                               AFF_INFO ( FD ( Head ) , B ) ;
                              
                           SINON
                               P := FD ( Head ) ;
                               B := INFO ( P ) ;
                               SI ( V = STRUCT ( B , 1 ) )
                                   AFF_STRUCT ( B , 2 , STRUCT ( B , 2 ) + 1 ) ;
                                   AFF_INFO ( P , B ) ;
                                  
                               SINON
                                   CREERNOEUD ( P ) ;
                                   AFF_STRUCT ( B , 1 , V ) ;
                                   AFF_STRUCT ( B , 2 , 1 ) ;
                                   AFF_STRUCT ( B , 3 , Result ) ;
                                   AFF_INFO ( P , B ) ;
                                   AFF_FG ( P , NIL ) ;
                                   AFF_FD ( P , FD ( Head ) ) ;
                                   AFF_FD ( Head , P ) ;
                                  
                               FSI ;
                              
                           FSI ;
                          
                       FSI ;
                      
                   FSI ;
                  
               FSI ;
              
           FSI ;
          
       FSI ;
      
   FIN
   ACTION Insert_tree ( Tete1 , Tete2 , Peuple )
   SOIENT
       Tete1 UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Tete2 UN ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       S UNE STRUCTURE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       Peuple UN ENTIER ;
      
   DEBUT
       SI ( Tete2 <> NIL )
           APPEL Insert_tree ( Tete1 , FG ( Tete2 ) , Peuple ) ;
           S := INFO ( Tete2 ) ;
           APPEL Insert_element ( Tete1 , STRUCT ( S , 3 ) , STRUCT ( S , 4 ) ) ;
           Peuple := Peuple + 1 ;
           APPEL Insert_tree ( Tete1 , FD ( Tete2 ) , Peuple ) ;
          
       FSI ;
      
   FIN
   ACTION Global ( Tree , Tab , Population )
   SOIENT
       Tree UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Tab UN TABLEAU ( 10 ) DE ARB DE ( CHAINE , CHAINE , ENTIER , CAR ) ;
       I UN ENTIER ;
       Population UN ENTIER ;
      
   DEBUT
       Population := 0 ;
       I := 1 ;
       Tree := NIL ;
       TQ ( ELEMENT ( Tab [ I ] ) = NIL )
           I := ( I + 1 ) ;
          
       FTQ ;
       TQ ( I <> 11 )
           APPEL Insert_tree ( Tree , ELEMENT ( Tab [ I ] ) , Population ) ;
           I := ( I + 1 ) ;
          
       FTQ ;
      
   FIN
   ACTION Locate_intervalle1 ( Head , Inf , Sup , Res , Nombre )
   SOIENT
       Head UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Inf UN ENTIER ;
       Sup UN ENTIER ;
       Res UN CAR ;
       Nombre UN ENTIER ;
       S UNE STRUCTURE ( ENTIER , ENTIER , CAR ) ;
      
   DEBUT
       SI ( Head <> NIL )
           SI ( STRUCT ( INFO ( Head ) , 1 ) > Inf )
               APPEL Locate_intervalle1 ( FG ( Head ) , Inf , Sup , Res , Nombre ) ;
              
           FSI ;
           S := INFO ( Head ) ;
           SI ( ( ( STRUCT ( S , 3 ) = Res ) ET ( STRUCT ( S , 1 ) >= Inf ) ) ET ( STRUCT ( S , 1 ) <= Sup ) )
               Nombre := Nombre + STRUCT ( S , 2 ) ;
              
           FSI ;
           SI ( STRUCT ( INFO ( Head ) , 1 ) < Sup )
               APPEL Locate_intervalle1 ( FD ( Head ) , Inf , Sup , Res , Nombre ) ;
              
           FSI ;
          
       FSI ;
      
   FIN
   ACTION Prctg_intervalle1 ( Head , Minimum , Maximum , Res , Total , Pourcentage )
   SOIENT
       Head UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Minimum UN ENTIER ;
       Maximum UN ENTIER ;
       Res UN CAR ;
       Total UN ENTIER ;
       Pourcentage UN ENTIER ;
      
   DEBUT
       Pourcentage := 0 ;
       APPEL Locate_intervalle1 ( Head , Minimum , Maximum , Res , Pourcentage ) ;
       Pourcentage := ( ( Pourcentage * 100 ) / Total ) ;
      
   FIN
   ACTION Locate_intervalle2 ( Head , Inf , Sup , Nombre )
   SOIENT
       Head UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Inf UN ENTIER ;
       Sup UN ENTIER ;
       Nombre UN ENTIER ;
       S UNE STRUCTURE ( ENTIER , ENTIER , CAR ) ;
      
   DEBUT
       SI ( Head <> NIL )
           SI ( STRUCT ( INFO ( Head ) , 1 ) > Inf )
               APPEL Locate_intervalle2 ( FG ( Head ) , Inf , Sup , Nombre ) ;
              
           FSI ;
           S := INFO ( Head ) ;
           SI ( ( STRUCT ( S , 1 ) >= Inf ) ET ( STRUCT ( S , 1 ) <= Sup ) )
               Nombre := Nombre + STRUCT ( S , 2 ) ;
              
           FSI ;
           SI ( STRUCT ( INFO ( Head ) , 1 ) < Sup )
               APPEL Locate_intervalle2 ( FD ( Head ) , Inf , Sup , Nombre ) ;
              
           FSI ;
          
       FSI ;
      
   FIN
   ACTION Prctg_intervalle2 ( Head , Minimum , Maximum , Res , Total , Pourcentage )
   SOIENT
       Head UN ARB DE ( ENTIER , ENTIER , CAR ) ;
       Maximum UN ENTIER ;
       Minimum UN ENTIER ;
       Res UN CAR ;
       Total UN ENTIER ;
       Pourcentage UN ENTIER ;
      
   DEBUT
       Pourcentage := 0 ;
       SI ( Res = 'R' )
           APPEL Locate_intervalle2 ( FG ( Head ) , Minimum , Maximum , Pourcentage ) ;
          
       SINON
           APPEL Locate_intervalle2 ( FD ( Head ) , Minimum , Maximum , Pourcentage ) ;
          
       FSI ;
       Pourcentage := ( ( Pourcentage * 100 ) / Total ) ;
      
   FIN