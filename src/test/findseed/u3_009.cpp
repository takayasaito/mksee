#include <iostream>
#include "test_ds.hpp"

namespace {

    class U3009 : public TestDS
    {
    protected:
        U3009() {
            IFNAME1 = (char *)"mir_001.txt";
            IFNAME2 = (char *)"utr3_009.txt";
            OFNAME1 = (char *)"test_output_9.txt";
            OFNAME2 = (char *)"test_ds9.txt";
        }
    };

    TEST_F(U3009, mrna_fasta) {
        read_files();

        EXPECT_EQ(1u, length(mrna_ids));

        const char *id1 = "hg18_refGene NM_001259 range=chr7:92072173-92082389 5'pad=0 3'pad=0 "
                "revComp=TRUE strand=- repeatMasking=none";
        EXPECT_STREQ(id1, seqan::toCString(mrna_ids[0]));

        EXPECT_EQ(1u, length(mrna_seqs));
        const char *seq1 = "GGCCUCAGCAGCCGCCUUAAGCUGAUCCUGCGGAGAACACCCUUGGUGGC"
                "UUAUGGGUCCCCCUCAGCAAGCCCUACAGAGCUGUGGAGGAUUGCUAUCU"
                "GGAGGCCUUCCAGCUGCUGUCUUCUGGACAGGCUCUGCUUCUCCAAGGAA"
                "ACCGCCUAGUUUACUGUUUUGAAAUCAAUGCAAGAGUGAUUGCAGCUUUA"
                "UGUUCAUUUGUUUGUUUGUUUGUCUGUUUGUUUCAAGAACCUGGAAAAAU"
                "UCCAGAAGAAGAGAAGCUGCUGACCAAUUGUGCUGCCAUUUGAUUUUUCU"
                "AACCUUGAAUGCUGCCAGUGUGGAGUGGGUAAUCCAGGCACAGCUGAGUU"
                "AUGAUGUAAUCUCUCUGCAGCUGCCGGGCCUGAUUUGGUACUUUUGAGUG"
                "UGUGUGUGCAUGUGUGUGUGUGUGUGUGUGUGUGUGUGUGUGUAUGUGAG"
                "AGAUUCUGUGAUCUUUUAAAGUGUUACUUUUUGUAAACGACAAGAAUAAU"
                "UCAAUUUUAAAGACUCAAGGUGGUCAGUAAAUAACAGGCAUUUGUUCACU"
                "GAAGGUGAUUCACCAAAAUAGUCUUCUCAAAUUAGAAAGUUAACCCCAUG"
                "UCCUCAGCAUUUCUUUUCUGGCCAAAAGCAGUAAAUUUGCUAGCAGUAAA"
                "AGAUGAAGUUUUAUACACACAGCAAAAAGGAGAAAAAAUUCUAGUAUAUU"
                "UUAAGAGAUGUGCAUGCAUUCUAUUUAGUCUUCAGAAUGCUGAAUUUACU"
                "UGUUGUAAGUCUAUUUUAACCUUCUGUAUGACAUCAUGCUUUAUCAUUUC"
                "UUUUGGAAAAUAGCCUGUAAGCUUUUUAUUACUUGCUAUAGGUUUAGGGA"
                "GUGUACCUCAGAUAGAUUUUAAAAAAAAGAAUAGAAAGCCUUUAUUUCCU"
                "GGUUUGAAAUUCCUUUCUUCCCUUUUUUUGUUGUUGUUAUUGUUGUUUGU"
                "UGUUGUUAUUUUGUUUUUGUUUUUAGGAAUUUGUCAGAAACUCUUUCCUG"
                "UUUUGGUUUGGAGAGUAGUUCUCUCUAACUAGAGACAGGAGUGGCCUUGA"
                "AAUUUUCCUCAUCUAUUACACUGUACUUUCUGCCACACACUGCCUUGUUG"
                "GCAAAGUAUCCAUCUUGUCUAUCUCCCGGCACUUCUGAAAUAUAUUGCUA"
                "CCAUUGUAUAACUAAUAACAGAUUGCUUAAGCUGUUCCCAUGCACCACCU"
                "GUUUGCUUGCUUUCAAUGAACCUUUCAUAAAUUCGCAGUCUCAGCUUAUG"
                "GUUUAUGGCCUCGAUUCUGCAAACCUAACAGGGUCACAUAUGUUCUCUAA"
                "UGCAGUCCUUCUACCUGGUGUUUACUUUUGUUACCUAAAUAAUGAGUAGG"
                "AUCUUGUUUUGUUUUAUCACCAGCACACAGAUUGCUAUAAACUGUUACUU"
                "UGUGAAUUACAUUUUUAUAGAAGAUAUUUUCAGUGUCUUUACCUGAGGGU"
                "AUGUCUUUAGCUAUGUUUUAGGGCCAUACAUUUACUCUAUCAAAUGAUCU"
                "UUUCUCCAUCCCCCAGGCUGUGCUUAUUUCUAGUGCCUUGUGCUCACUCC"
                "UGCUCUCUACAGAGCCAGCCUGGCCUGGGCAUUGUAAACAGCUUUUCCUU"
                "UUUCUCUUACUGUUUUCUCUACAGUCCUUUAUAUUUCAUACCAUCUCUGC"
                "CUUAUAAGUGGUUUAGUGCUCAGUUGGCUCUAGUAACCAGAGGACACAGA"
                "AAGUAUCUUUUGGAAAGUUUAGCCACCUGUGCUUUCUGACUCAGAGUGCA"
                "UGCAACAGUUAGAUCAUGCAACAGUUAGAUUAUGUUUAGGGUUAGGAUUU"
                "UCAAAGAAUGGAGGUUGCUGCACUCAGAAAAUAAUUCAGAUCAUGUUUAU"
                "GCAUUAUUAAGUUGUACUGAAUUCUUUGCAGCUUAAUGUGAUAUAUGACU"
                "AUCUUGAACAAGAGAAAAAACUAGGAGAUGUUUCUCCUGAAGAGCUUUUG"
                "GGGUUGGGAACUAUUCUUUUUUAAUUGCUGUACUACUUAACAUUGUUCUA"
                "AUUCAGUAGCUUGAGGAACAGGAACAUUGUUUUCUAGAGCAAGAUAAUAA"
                "AGGAGAUGGGCCAUACAAAUGUUUUCUACUUUCGUUGUGACAACAUUGAU"
                "UAGGUGUUGUCAGUACUAUAAAUGCUUGAGAUAUAAUGAAUCCACAGCAU"
                "UCAAGGUCAGGUCUACUCAAAGUCUCACAUGGAAAAGUGAGUUCUGCCUU"
                "UCCUUUGAUCGAGGGUCAAAAUACAAAGACAUUUUUGCUAGGGCCUACAA"
                "AUUGAAUUUAAAAACUCACUGCACUGAUUCAUCUGAGCUUUUUGGUUAGU"
                "AUUCAUGGCUAGAGUGAACAUAGCUUUAGUUUUUGCUGUUGUAAAAGUGU"
                "UUUCAUAAGUUCACUCAAGAAAAAUGCAGCUGUUCUGAACUGGAAUUUUU"
                "CAGCAUUCUUUAGAAUUUUAAAUGAGUAGAGAGCUCAACUUUUAUUCCUA"
                "GCAUCUGCUUUUGACUCAUUUCUAGGCAGUGCUUAUGAAGAAAAAUUAAA"
                "GCACAAACAUUCUGGCAUUCAAUCGUUGGCAGAUUAUCUUCUGAUGACAC"
                "AGAAUGAAAGGGCAUCUCAGCCUCUCUGAACUUUGUAAAAAUCUGUCCCC"
                "AGUUCUUCCAUCGGUGUAGUUGUUGCAUUUGAGUGAAUACUCUCUUGAUU"
                "UAUGUAUUUUAUGUCCAGAUUCGCCAUUUCUGAAAUCCAGAUCCAACACA"
                "AGCAGUCUUGCCGUUAGGGCAUUUUGAAGCAGAUAGUAGAGUAAGAACUU"
                "AGUGACUACAGCUUAUUCUUCUGUAACAUAUGGUUUCAAACAUCUUUGCC"
                "AAAAGCUAAGCAGUGGUGAACUGAAAAGGGCAUAUUGCCCCAAGGUUACA"
                "CUGAAGCAGCUCAUAGCAAGUUAAAAUAUUGUGACAGAUUUGAAAUCAUG"
                "UUUGAAUUUCAUAGUAGGACCAGUACAAGAAUGUCCCUGCUAGUUUCUGU"
                "UUGAUGUUUGGUUCUGGCGGCUCAGGCAUUUUGGGAACUGUUGCACAGGG"
                "UGGAGUCAAAACAACCUACAUAUAAAAAAGAAACUUGUCCAUUUAGCUUU"
                "CAUAAGAAAUCCCAUGGCAAAGGGUAAUAAAAAGGACCUAAUCUUAAAAA"
                "UACAAUUUCUAAGCACUUGUAAGAACCCAGUGGGUUGGAGCCUCCCACUU"
                "UGUCCCUCCUUUGAAGUGGAUGGGAACUCAAGGUGCAAAGAACCUGUUUU"
                "GGAAGAAAGCUUGGGGCCAUUUCAGCCCCCUGUAUUCUCAUGAUUUUCUC"
                "UCAGGAAGCACACACUGUGAAUGGCAGACUUUUCAUUUAGCCCCAGGUGA"
                "CUUACUAAAAAUAGUUGAAAAUUAUUCACCUAAGAAUAGAAUCUCAGCAU"
                "UGUGUUAAAUAAAAAUGAAAGCUUUAGAAGGCAUGAGAUGUUCCUAUCUU"
                "AAAUAAAGCAUGUUUCUUUUCUAUAGAGAAAUGUAUAGUUUGACUCUCCA"
                "GAAUGUACUAUCCAUCUUGAUGAGAAAACUCUUAAAUAGUACCAAACAUU"
                "UUGAACUUUAAAUUAUGUAUUUAAAGUGAGUGUUUAAGAAACUGUAGCUG"
                "CUUCUUUUACAAGUGGUGCCUAUUAAAGUCAGUAAUGGCCAUUAUUGUUC"
                "CAUUGUGGAAAUUAAAUUAUGUAAGCUUCCUAAUAUCAUAAACAUAUUAA"
                "AAUUCUUCUAAAAUAUUGCUUUUCUUUUAAGUGACAAUUUGACUAUUCUU"
                "AUGAUAAGCACAUGAGAGUGUCUUACAUUUUCCAAAAGCAGGCUUUAAUU"
                "GCAUAGUUGAGUCUAGGAAAAAAUAAUGUUAAAAGUGAAUAUGCCACCAU"
                "AAUUACUUAAUUAUGUUAGUAUAGAAACUACAGAAUAUUUACCCUGGAAA"
                "GAAAAUAUUGGAAUGUUAUUAUAAACUCUUAGAUAUUUAUAUAAUUCAAA"
                "AGAAUGCAUGUUUCACAUUGUGACAGAUAAAGAUGUAUGAUUUCUAAGGC"
                "UUUAAAAAUUAUUCAUAAAACAGUGGGCAAUAGAUAAAGGAAAUUCUGGA"
                "GAAAAUGAAGGUAUUUAAAGGGUAGUUUCAAAGCUAUAUAUAUUUUGAAG"
                "GAUAUAUUCUUUAUGAACAAAUAUAUUGUAAAAAUUUAUACUAAGGUCAU"
                "CUGGUAACUGUGGGAUUAAUAUGGUCGAAAACAAAUGUUAUGGAGAAGCU"
                "GUCCCAAGCAAACUAAAUUACCUGUACUUUUUUCCCAUUUCAAGGGAAGA"
                "GGCAACCACAUGAAGCAAUACUUCUUACACAUGCCUAAGAACGUUCAUUG"
                "AAAAAAUAAAUUUUUAAAAGGCAUGUGUUUCCUAUGCCACCAAUACUUUU"
                "GAAAAAUUGUGAACCUUACCCAAAACCAUUUAUCAUGUCCAUUAAGUAUA"
                "UUUGGGUAUAUAAUUAGGAAGAUAUUUACAUGUUCCAUCUCCACAGUGGA"
                "AAAACUUAUUGAGGCUACCAAAGUGUGCCAAGAAAUGUAAGUCCUUAGAG"
                "UAAUUAGAAAUGCUGUUUUCCUCAAAAGCAUGAGAAACUAGCAUUUUCAU"
                "UUCUUAUUUACUCCCUUUCUAUAUCAAUGCAAUUCACAACCCAAUUUUAA"
                "UACAUCCCUAUAUCUCAAGCAUUUCUAUCUUGUACUUUUUCAGAAAAUAA"
                "ACCAAAAAUAAUCCUUUGGUCUCUCUAUCUUCUGACCUUUGUAAGCAACA"
                "GAAAUGUAAAAACAGAAGGGGUCCAAUUUUUACACGUUUUUUUCUCAAGU"
                "AGCCUUUCUGGGGAUUUUUAUUUUCUUAAUGAAGUGCCAAUCAGCUUUUC"
                "AAAAUGUUUUCUAUUUCUCAGCAUUUCCAGGAAGUGAUAACGUUUAGCUA"
                "AAUGAGUAGAAGUGGACUUCCUUCAACAUAUUGUUACCUUGUCUAGCCUU"
                "AGGAAGAAAACAAGAGCCACCUGAAAAUAAAUACAGGCUCUUUUCGAGCA"
                "UCUGCUGAAAUACUGUUACAGCAAUUUGAAGUUGAUGUGGUAGGAAAGGA"
                "AGGUGACUUUUCUUGCAAAAGUCUUUCUAAACAUUCACACUGUCCUAAGA"
                "GAUGAGCUUUCUUGUUUUAUUCCGGUAUAUUCCACAAGGUGGCACUUUUA"
                "GAGAAAAACAAAUCUGAUGAAGACUAAAGAGGUACUUCUAAAAGAGAUUU"
                "CAUUCUAACUUUAUUUUUCUGCGCAUAUUUAACUCUUUCCUAGCACUUGU"
                "UUUUUGGGAUGAUUAAUAGUCUCUAUAAUGUUCUGUAACUUCAAUAUUUU"
                "ACUUGUUACCUAGGUUCUGAACAAUUGUCUGCAAAUAAAUUGUUCUUAAG"
                "GAUGGAUAAUACACCCAUUUUGAUCAUUUAAGUAAAGAAAGCCUAGUCAU"
                "UCAUUCAGUCAAGAAAAAAUUUUUGAAGUACCCAGUUACCUUACUUUUCU"
                "AGAUUAAAACAGGCUUAGUUACUAAAAAGGCAGUCCUCAUCUGUGAACAG"
                "GAUAGUUUCGUUAGAAGUAUAAAACUCCUUUAGUGGCCCCAGUUAAAACA"
                "CACAUACCCUCUCUGCUGCUUUCAAAUUCCCUAGCAUGGUGGCCUUUCAA"
                "CAUUGAUUAAAUUUUAAAAUCCUAAUUUAAAGAUCAGGUGAGCAAAAUGA"
                "GUAGCACAUCAGUAAUUCAGUAGACAAAACUUUUGUCUGAAAAAUUGCUG"
                "UAUUGAAACAGAGCCCUAAAAUACCAAAAGACCAGGUAAUUUUAACAUUU"
                "GUGGAAUCACAAAUGUAAAUUCAUAAGAAGCUCUAAUUAAAAAAAAAAAG"
                "UCUGAAGUAUAUGAGCAUAACAACUUAGGAGUGUGUCUACAUACUUAACU"
                "UUUGAAGUUUUUUGGCAACUUUAUAUACUUUUUUUAAAUUUACAAGUCUA"
                "CUUAAAGACUUCUUAUACCCCAAAUGAUUAAGUUAAUUUUAGAGGUCACC"
                "UUUCUCACAGCAGUGUCACUUGAAAUUUAGUAGGGAAGGAUAUUGCAGUA"
                "UUUUUCAGUUUCCUUAGCACAGCACCACAGAAAGCAGCUUAUUCCUUUUG"
                "AGUGGCAGACACUCGACGGUGCCUGCCCAACUUUCCUCCUGAGUGGCAAG"
                "CAGAUGAGUCUCAGUAAUUCAUACUGAACCAAAAUGCCACAUACACUAGG"
                "GGCAGUCAGAAACUGGCUGAGAAAUCCCCCGCCUCAUUCGCCCCUCUGCU"
                "CCCAGGAACUAGAGUCCAGUUAAAGCCCCUAUGCGAAAGGCCGAAUUCCA"
                "CCCCAGGGUUUGUUAUAACAGUGGCCAGUCUGAACCCCAUUUGCUCGUGC"
                "UCAAAACUUGAUUCCCACUUGAAAGCCUUCCGGGCGCGCUGCCUCGUUGC"
                "CCCGCCCCUUUGGCAGGAGAGAGGCAGUGGGCGAGGCCGGGCUGGGGCCC"
                "CGCCUCCCACUCACCUGCCGGUGCCUGAAAUUAUGUGCGGCCCCGCGGGC"
                "UGCUUUCCGAGGUCAGAGUGCCCUGCUGCUGUCUCAGAGGCAUCUGUUCU";
        EXPECT_STREQ(seq1, seqan::toCString((seqan::CharString)mrna_seqs[0]));
    }

    TEST_F(U3009, comp_ngram) {
        comp_ngram();
    }

    TEST_F(U3009, comp_bruteforce) {
        comp_bruteforce();
    }

    TEST_F(U3009, comp_horspool) {
        comp_horspool();
    }

    TEST_F(U3009, comp_suffixarray) {
        comp_suffixarray();
    }
}