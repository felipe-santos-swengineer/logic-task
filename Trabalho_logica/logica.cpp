#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <fstream>
#include <sstream>
#include <memory>
#include <stdexcept>
#include <time.h>

using namespace std;
//By: Felipe Santos 

typedef struct{
    string nome;
    string professor;
    string curso;
    string horario;
    string semestre;
    string semestre_es;
    string semestre_cc;
    bool apenas_1_vez_na_semana; //se a turma se reune apenas um vez na semana

}Disciplina;

int main(){

  srand(time(NULL));

  string output_file_name = "entrada.txt";
  ofstream output_file;
  output_file.open(output_file_name);

  vector<string> dias = {"seg", "ter", "qua", "qui", "sex"};
  vector<string> horarios = {"h1","h2","h3","h4"};
  vector<string> cursos = {"cc","es"};

    Disciplina disciplinas[58];

    //base de dados;
    for(int i = 0; i < 58; i++){
        disciplinas[i].semestre_cc = 10;
        disciplinas[i].semestre_es = 10;
    }


    disciplinas[0].nome = "ProjPesquisaCient&Tec";
    disciplinas[0].curso = "cc-es";
    disciplinas[0].professor = "Anna";
    disciplinas[0].apenas_1_vez_na_semana = true;
    disciplinas[0].semestre_cc ="7";
    disciplinas[0].semestre_es ="7";

    disciplinas[1].nome = "PreCalculo";
    disciplinas[1].curso = "cc";
    disciplinas[1].professor = "AndersonM";
    disciplinas[1].semestre = "1";
    disciplinas[1].apenas_1_vez_na_semana = true;

    disciplinas[2].nome = "Logica";
    disciplinas[2].curso = "es";
    disciplinas[2].professor = "Alexandre";
    disciplinas[2].semestre = "4";
    disciplinas[2].apenas_1_vez_na_semana = false;

    disciplinas[3].nome = "Logica";
    disciplinas[3].curso = "cc";
    disciplinas[3].professor = "Alexandre";
    disciplinas[3].semestre = "4";
    disciplinas[3].apenas_1_vez_na_semana = false;

    disciplinas[4].nome = "ArquiteturaSoftware";
    disciplinas[4].curso = "es";
    disciplinas[4].professor = "Anna";
    disciplinas[4].semestre = "6";
    disciplinas[4].apenas_1_vez_na_semana = false;

    disciplinas[5].nome = "IntroEngenhariaSoftware";
    disciplinas[5].curso = "es";
    disciplinas[5].professor = "Anna";
    disciplinas[5].semestre = "1";
    disciplinas[5].apenas_1_vez_na_semana = false;

    disciplinas[6].nome = "Compiladores";
    disciplinas[6].curso = "cc";
    disciplinas[6].professor = "Bonfim";
    disciplinas[6].semestre = "7";
    disciplinas[6].apenas_1_vez_na_semana = false;

    disciplinas[7].nome = "TeoriaComputacao";
    disciplinas[7].curso = "cc";
    disciplinas[7].professor = "Bonfim";
    disciplinas[7].semestre = "7";
    disciplinas[7].apenas_1_vez_na_semana = false;

    disciplinas[8].nome = "LinguagensFormaisAutomatos";
    disciplinas[8].curso = "cc";
    disciplinas[8].professor = "Bonfim";
    disciplinas[8].semestre = "6";
    disciplinas[8].apenas_1_vez_na_semana = false;

    disciplinas[9].nome = "BancoDados";
    disciplinas[9].curso = "cc";
    disciplinas[9].professor = "Daniel";
    disciplinas[9].semestre = "4";
    disciplinas[9].apenas_1_vez_na_semana = false;

    disciplinas[10].nome = "BancoDados";
    disciplinas[10].curso = "es";
    disciplinas[10].professor = "Daniel";
    disciplinas[10].semestre = "4";
    disciplinas[10].apenas_1_vez_na_semana = false;

    disciplinas[11].nome = "ComputacaoGrafica";
    disciplinas[11].curso = "cc";
    disciplinas[11].professor = "Daniel";
    disciplinas[11].semestre = "5";
    disciplinas[11].apenas_1_vez_na_semana = false;

    disciplinas[12].nome = "LabProgramacao";
    disciplinas[12].curso = "cc";
    disciplinas[12].professor = "Eurinardo";
    disciplinas[12].semestre = "2";
    disciplinas[12].apenas_1_vez_na_semana = false;

    disciplinas[13].nome = "LabProgramacao";
    disciplinas[13].curso = "es";
    disciplinas[13].professor = "Eurinardo";
    disciplinas[13].semestre = "2";
    disciplinas[13].apenas_1_vez_na_semana = false;

    disciplinas[14].nome = "EstruturaDadosAvancada";
    disciplinas[14].curso = "cc";
    disciplinas[14].professor = "Eurinardo";
    disciplinas[14].semestre = "4";
    disciplinas[14].apenas_1_vez_na_semana = false;

    disciplinas[15].nome = "DesenvolvimentoWeb";
    disciplinas[15].curso = "cc";
    disciplinas[15].professor = "Filipe";
    disciplinas[15].semestre = "6";
    disciplinas[15].apenas_1_vez_na_semana = false;

    disciplinas[16].nome = "SistemasDistribuidos";
    disciplinas[16].curso = "cc";
    disciplinas[16].professor = "Filipe";
    disciplinas[16].semestre = "6";
    disciplinas[16].apenas_1_vez_na_semana = false;

    disciplinas[17].nome = "RedesComputadores";
    disciplinas[17].curso = "cc-es";
    disciplinas[17].professor = "Filipe";
    disciplinas[17].apenas_1_vez_na_semana = false;
    disciplinas[17].semestre_cc ="5";
    disciplinas[17].semestre_es ="5";

    disciplinas[18].nome = "LinguagensProgramacao";
    disciplinas[18].curso = "es";
    disciplinas[18].professor = "Nauber";
    disciplinas[18].semestre = "3";
    disciplinas[18].apenas_1_vez_na_semana = false;

    disciplinas[19].nome = "ProcessosSoftware";
    disciplinas[19].curso = "es";
    disciplinas[19].professor = "Nauber";
    disciplinas[19].semestre = "4";
    disciplinas[19].apenas_1_vez_na_semana = false;

    disciplinas[20].nome = "ManutencaoSoftware";
    disciplinas[20].curso = "es";
    disciplinas[20].professor = "Nauber";
    disciplinas[20].semestre = "6";
    disciplinas[20].apenas_1_vez_na_semana = false;

    disciplinas[21].nome = "IntroProcessosRequisitosSoftware";
    disciplinas[21].curso = "es";
    disciplinas[21].professor = "Osvaldo";
    disciplinas[21].semestre = "2";
    disciplinas[21].apenas_1_vez_na_semana = false;

    disciplinas[22].nome = "GerenciaProjetosSoftware";
    disciplinas[22].curso = "es";
    disciplinas[22].professor = "Osvaldo";
    disciplinas[22].semestre = "5";
    disciplinas[22].apenas_1_vez_na_semana = false;

    disciplinas[23].nome = "AnaliseProjetoSistemas";
    disciplinas[23].curso = "cc-es";
    disciplinas[23].professor = "Osvaldo";
    disciplinas[23].apenas_1_vez_na_semana = false;
    disciplinas[23].semestre_es = "4";
    disciplinas[23].semestre_cc = "5";

    disciplinas[24].nome = "Empreendedorismo";
    disciplinas[24].curso = "cc-es";
    disciplinas[24].professor = "Josemeire";
    disciplinas[24].apenas_1_vez_na_semana = false;
    disciplinas[24].semestre_cc ="7";
    disciplinas[24].semestre_es ="6";

    disciplinas[25].nome = "EticaProfissional";
    disciplinas[25].curso = "es";
    disciplinas[25].professor = "Josemeire";
    disciplinas[25].semestre = "1";
    disciplinas[25].apenas_1_vez_na_semana = false;

    disciplinas[26].nome = "EticaProfissional";
    disciplinas[26].curso = "cc";
    disciplinas[26].professor = "Josemeire";
    disciplinas[26].semestre = "1";
    disciplinas[26].apenas_1_vez_na_semana = false;

    disciplinas[27].nome = "ProjetoAnaliseAlgoritmos";
    disciplinas[27].curso = "cc-es";
    disciplinas[27].professor = "Marcio";
    disciplinas[27].apenas_1_vez_na_semana = false;
    disciplinas[27].semestre_cc ="4";
    disciplinas[27].semestre_es ="4";

    disciplinas[28].nome = "FundamentosProgramacao";
    disciplinas[28].curso = "es";
    disciplinas[28].professor = "Marcio";
    disciplinas[28].semestre = "1";
    disciplinas[28].apenas_1_vez_na_semana = false;

    disciplinas[29].nome = "FundamentosProgramacao";
    disciplinas[29].curso = "cc";
    disciplinas[29].professor = "Marcio";
    disciplinas[29].semestre = "1";
    disciplinas[29].apenas_1_vez_na_semana = false;

    disciplinas[30].nome = "ProgramacaoOrientadaObjetos";
    disciplinas[30].curso = "cc";
    disciplinas[30].professor = "JoaoVitor";
    disciplinas[30].semestre = "3";
    disciplinas[30].apenas_1_vez_na_semana = false;

    disciplinas[31].nome = "ProgramacaoOrientadaObjetos";
    disciplinas[31].curso = "es";
    disciplinas[31].professor = "JoaoVitor";
    disciplinas[31].semestre = "3";
    disciplinas[31].apenas_1_vez_na_semana = false;

    disciplinas[32].nome = "VerificacaoValidacao";
    disciplinas[32].curso = "es";
    disciplinas[32].professor = "JoaoVitor";
    disciplinas[32].semestre = "6";
    disciplinas[32].apenas_1_vez_na_semana = false;

    disciplinas[33].nome = "ProjetoDetalhadoSoftware";
    disciplinas[33].curso = "es";
    disciplinas[33].professor = "JoaoVitor";
    disciplinas[33].semestre = "5";
    disciplinas[33].apenas_1_vez_na_semana = false;

    disciplinas[34].nome = "AlgoritmosGrafos";
    disciplinas[34].curso = "es";
    disciplinas[34].professor = "Pablo";
    disciplinas[34].semestre = "3";
    disciplinas[34].apenas_1_vez_na_semana = false;

    disciplinas[35].nome = "AlgoritmosGrafos";
    disciplinas[35].curso = "cc";
    disciplinas[35].professor = "Pablo";
    disciplinas[35].semestre = "3";
    disciplinas[35].apenas_1_vez_na_semana = false;

    disciplinas[36].nome = "MatematicaComputacional";
    disciplinas[36].curso = "cc";
    disciplinas[36].professor = "Tatiane";
    disciplinas[36].semestre = "6";
    disciplinas[36].apenas_1_vez_na_semana = false;

    disciplinas[37].nome = "EstruturaDados";
    disciplinas[37].curso = "cc";
    disciplinas[37].professor = "Tatiane";
    disciplinas[37].semestre = "2";
    disciplinas[37].apenas_1_vez_na_semana = false;

    disciplinas[38].nome = "EstruturaDados";
    disciplinas[38].curso = "es";
    disciplinas[38].professor = "Tatiane";
    disciplinas[38].semestre = "2";
    disciplinas[38].apenas_1_vez_na_semana = false;

    disciplinas[39].nome = "RequisitosSoftware";
    disciplinas[39].curso = "es";
    disciplinas[39].professor = "Patricia";
    disciplinas[39].semestre = "3";
    disciplinas[39].apenas_1_vez_na_semana = false;

    disciplinas[40].nome = "EngenhariaSoftware";
    disciplinas[40].curso = "cc";
    disciplinas[40].professor = "Patricia";
    disciplinas[40].semestre = "4";
    disciplinas[40].apenas_1_vez_na_semana = false;

    disciplinas[41].nome = "InteracaoHumanoComputador";
    disciplinas[41].curso = "cc";
    disciplinas[41].professor = "Patricia";
    disciplinas[41].semestre = "5";
    disciplinas[41].apenas_1_vez_na_semana = false;

    disciplinas[42].nome = "InteracaoHumanoComputador";
    disciplinas[42].curso = "es";
    disciplinas[42].professor = "Patricia";
    disciplinas[42].semestre = "5";
    disciplinas[42].apenas_1_vez_na_semana = false;

    disciplinas[43].nome = "SistemasOperacionais";
    disciplinas[43].curso = "cc";
    disciplinas[43].professor = "Rafael";
    disciplinas[43].semestre = "5";
    disciplinas[43].apenas_1_vez_na_semana = false;

    disciplinas[44].nome = "InteligenciaArtifical";
    disciplinas[44].curso = "cc";
    disciplinas[44].professor = "Alex";
    disciplinas[44].semestre = "6";
    disciplinas[44].apenas_1_vez_na_semana = false;

    disciplinas[45].nome = "ArquiteturaComputadores";
    disciplinas[45].curso = "es";
    disciplinas[45].professor = "Alex";
    disciplinas[45].semestre = "2";
    disciplinas[45].apenas_1_vez_na_semana = false;

    disciplinas[46].nome = "ArquiteturaComputadores";
    disciplinas[46].curso = "cc";
    disciplinas[46].professor = "Alex";
    disciplinas[46].semestre = "2";
    disciplinas[46].apenas_1_vez_na_semana = false;

    disciplinas[47].nome = "MatematicaBasica";
    disciplinas[47].curso = "es";
    disciplinas[47].professor = "Gleison";
    disciplinas[47].semestre = "1";
    disciplinas[47].apenas_1_vez_na_semana = false;

    disciplinas[48].nome = "CalculoDiferencialIntegral";
    disciplinas[48].curso = "cc";
    disciplinas[48].professor = "Gleison";
    disciplinas[48].semestre = "2";
    disciplinas[48].apenas_1_vez_na_semana = false;

    disciplinas[49].nome = "MatematicaBasica";
    disciplinas[49].curso = "cc";
    disciplinas[49].professor = "Gastao";
    disciplinas[49].semestre = "1";
    disciplinas[49].apenas_1_vez_na_semana = false;

    disciplinas[50].nome = "AlgebraLinear";
    disciplinas[50].curso = "cc";
    disciplinas[50].professor = "Gastao";
    disciplinas[50].semestre = "3";
    disciplinas[50].apenas_1_vez_na_semana = false;

    disciplinas[51].nome = "ProbabilidadeEstatistica";
    disciplinas[51].curso = "cc";
    disciplinas[51].professor = "Rosineide";
    disciplinas[51].semestre = "3";
    disciplinas[51].apenas_1_vez_na_semana = false;

    disciplinas[52].nome = "MatematicaDiscreta";
    disciplinas[52].curso = "es";
    disciplinas[52].professor = "AndersonF";
    disciplinas[52].semestre = "2";
    disciplinas[52].apenas_1_vez_na_semana = false;

    disciplinas[53].nome = "MatematicaDiscreta";
    disciplinas[53].curso = "cc";
    disciplinas[53].professor = "AndersonF";
    disciplinas[53].semestre = "2";
    disciplinas[53].apenas_1_vez_na_semana = false;

    disciplinas[54].nome = "ProbabilidadeEstatistica";
    disciplinas[54].curso = "es";
    disciplinas[54].professor = "Nilde";
    disciplinas[54].semestre = "3";
    disciplinas[54].apenas_1_vez_na_semana = false;

    disciplinas[55].nome = "IntroCienciaComp";
    disciplinas[55].curso = "cc";
    disciplinas[55].professor = "Rafael";
    disciplinas[55].semestre = "1";
    disciplinas[55].apenas_1_vez_na_semana = false;

    disciplinas[56].nome = "LinguagensProgramacao";
    disciplinas[56].curso = "cc";
    disciplinas[56].professor = "Rafael";
    disciplinas[56].semestre = "3";
    disciplinas[56].apenas_1_vez_na_semana = false;

    disciplinas[57].nome = "QualidadeSoftware";
    disciplinas[57].curso = "es";
    disciplinas[57].professor = "Anna";
    disciplinas[57].semestre = "6";
    disciplinas[57].apenas_1_vez_na_semana = false;

    int aux = 0;
    int aux2 = 0;

    //parte 1 do arquivo : professor_disciplina-curso

    for(int i = 0; i < 58; i++){
        output_file << disciplinas[i].professor + "_" + disciplinas[i].nome + "-" + disciplinas[i].curso << endl;
    }

    //parte 2 do arquivo : restrições

  //restrição de dias para disciplinas de 2 dias = Se acontece na segunda as 08, então acontece na quarta as 08

  for(int i = 0; i < 58; i++){
    if(disciplinas[i].apenas_1_vez_na_semana == false){
        for(int j = 0; j < dias.size(); j++){
            for(int h = 0; h < horarios.size(); h++){
                cout << disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                output_file << disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
            }
        }
        cout << endl;
        output_file << endl;
    }
}

  for(int i = 0; i < 58; i++){
    if(disciplinas[i].apenas_1_vez_na_semana == false){
    for(int j = 0; j < dias.size(); j++){
        for(int h = 0; h < horarios.size(); h++){
            if(j == 2 ){
                cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                cout << disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j - 2] + "_" + horarios[h] << " ";
                output_file <<  disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j - 2] + "_" + horarios[h] << " ";
                cout << disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j + 2] + "_" + horarios[h] << endl;
                output_file <<  disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j + 2] + "_" + horarios[h] << endl;
                for(int j1 = 0; j1 < dias.size(); j1++){
                    for(int h1 = 0; h1 < horarios.size(); h1++){
                        if(j1 == j && h != h1){
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                        }
                        else if((j1 == 0 || j1 == 4) && h != h1){
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                        }
                        else if(j1 != 0 && j1 != 4 && h != h1){
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                        }
                    }
                }
            }
            else{
                for(int j1 = 0; j1 < dias.size(); j1++){
                    for(int h1 = 0; h1 < horarios.size(); h1++){
                        if(j1 == j + 2 && h1 == h){ //seg-qua ou ter-qui
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            cout << disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                            output_file <<  disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                        }
                        else if(j1 == j - 2 && h1 == h){ //sex - qua
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            cout << disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                            output_file <<  disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                        }
                        else if(j1 != j || h != h1){
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                        }
                    }
                }
              }
            }
        }
    }
    }


//restrição de dia para disciplina que ocorrem uma vez

for(int i = 0; i < 58; i++){
    if(disciplinas[i].apenas_1_vez_na_semana == true){
        for(int j = 0; j < dias.size(); j++){
            for(int h = 0; h < horarios.size(); h++){
                cout << disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                output_file << disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
            }
        }
        cout << endl;
        output_file << endl;
    }
}

    for(int i = 0; i < 58; i++){
        if(disciplinas[i].apenas_1_vez_na_semana == true){
            for(int j = 0; j < dias.size(); j++){
                for(int h = 0; h < horarios.size(); h++){
                    for(int j1 = 0; j1 < dias.size(); j1++){
                        for(int h1 = 0; h1 < horarios.size(); h1++){
                            if(j1 == j && h != h1){
                                cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                                output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;

                            }
                            else if(j1 != j || h != h1){
                                    cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                                    output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j1] + "_" + horarios[h1] << endl;
                            }
                        }
                    }

                }
            }
        }
    }


//restrição de professor 1 = Impeça que tenha disciplinas do mesmo professor no mesmo horario

for(int i = 0; i < 58; i++){
    for(int j = 0; j < dias.size(); j++){
        for(int h = 0; h < horarios.size(); h++){
                for(int  i1 = 0; i1 < 58; i1++){
                    if(i != i1){
                        if(disciplinas[i].professor == disciplinas[i1].professor){
                            cout <<  "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                            cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                            output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                            aux = 0;
                            }

                        }
                    }
                }
            }
    }

//restrição professor 2 = Da aula na segunda, não da na sexta, e vice - versa
for(int i = 0; i < 58; i++){
    for(int j = 0; j < dias.size(); j++){
        for(int h = 0; h < horarios.size(); h++){
            for(int i1 = 0; i1 < 58; i1++){
                    for(int h1 = 0; h1 < horarios.size(); h1++){
                    if(disciplinas[i].professor == disciplinas[i1].professor && j == 0){
                        cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                        output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                        cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[4] + "_" + horarios[h1] << endl;
                        output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[4] + "_" + horarios[h1] << endl;

                    }
                    if(disciplinas[i].professor == disciplinas[i1].professor && j == 4){
                        cout << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                        output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                        cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[0] + "_" + horarios[h1] << endl;
                        output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[0] + "_" + horarios[h1] << endl;

                    }
                }
            }
        }
    }
}


//restrição de semestres

for(int i = 0; i < 58; i++){
    for(int j = 0; j < dias.size(); j++){
        for(int h = 0; h < horarios.size(); h++){
                for(int i1 = 0; i1 < 58; i1++){
                        if(i1 != i){
                        if(disciplinas[i].curso == "es" && (disciplinas[i1].curso =="es" || disciplinas[i1].curso == "cc-es")){
                            if(disciplinas[i].semestre == disciplinas[i1].semestre_es || disciplinas[i].semestre == disciplinas[i1].semestre){
                                    cout <<  "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                            }
                        }
                        else if(disciplinas[i].curso == "cc" && (disciplinas[i1].curso =="cc" || disciplinas[i1].curso == "cc-es")){
                                if(disciplinas[i].semestre == disciplinas[i1].semestre_cc || disciplinas[i].semestre == disciplinas[i1].semestre){
                                    cout <<  "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                            }
                        }
                        else if(disciplinas[i].curso == "cc-es"){
                                    if(disciplinas[i1].curso == "cc" && disciplinas[i].semestre_cc == disciplinas[i1].semestre){
                                    cout <<  "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    }
                                    else if(disciplinas[i1].curso == "es" && disciplinas[i].semestre_es == disciplinas[i1].semestre){
                                    cout <<  "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    }
                                    else if(disciplinas[i1].curso == "cc-es" && disciplinas[i].semestre_cc == disciplinas[i1].semestre_cc){
                                    cout <<  "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    }
                                    else if(disciplinas[i1].curso == "cc-es" && disciplinas[i].semestre_es == disciplinas[i1].semestre_es){
                                    cout <<  "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    output_file << "-" + disciplinas[i].nome + "-" + disciplinas[i].curso + "_" + dias[j] + "_" + horarios[h] << " ";
                                    cout << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    output_file << "-" + disciplinas[i1].nome + "-" + disciplinas[i1].curso + "_" + dias[j] + "_" + horarios[h] << endl;
                                    }
                        }
                    }
                }
            }
    }
}
output_file.close();
return 0;}
