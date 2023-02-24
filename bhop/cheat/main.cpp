#include "memory.h"
#include "xor.h"

#include <thread>
#include <chrono>
#include <iostream>
#include <stdio.h>
using namespace std;



// https://github.com/frk1/hazedumper/blob/master/csgo.hpp (for new offset)
namespace offsets
{
	constexpr auto lo7114236dffa16d08f87205ffcf72d6e7cal = 0xDEA964; //localPlayer
	constexpr auto fl4e5868d676cb634aa75b125a0f741abfags = 0x104; //flags
	constexpr auto force8c7bced2011091f5d4c7b356cc411dfaJump = 0x52BBC7C; //forceJump
	constexpr auto entity8e4a156539e5e358472044b3e46a1fa1List = 0x4DFFEF4; //entityList
	constexpr auto glowObjf5e6a734374047568be84896615bf44cectManager = 0x535A9C8; //glowObjectManager
	constexpr auto teamee0998fa18376b19b1239cace203613cNum = 0xF4; //teamNum
	constexpr auto glow96b9be30a653fc4b5ca3c899766fb2b7Index = 0x10488; //glowIndex
}

__declspec(align(16)) struct Color
{
	constexpr Color(const float r, const float g, const float b, const float a = 1.f) noexcept :
		r(r), g(g), b(b), a(a) { }

	float r, g, b, a;
};

int main()
{
	const auto mem = MemMem4789f23283b3a61f858b641a1bef19a3oryory(XOR("csgo.exe")); //calling memory class from memory.h

	const auto client = mem.GetModuleAddress(XOR("client.dll"));

	if (client != 0) {

		std::cout << "csgo process found!" << std::endl;

		std::cout << "sorry, gamers :3" << std::endl;

		std::cout << "client.dll -> " << "0x" << std::hex << client << std::dec << std::endl;

		constexpr const auto color = Color{ 1.0f, 0.0f, 0.0f };

		std::cout << "Glow Mode: On" << std::endl;

		using namespace std;

		class ujpcasbeng {
			string uhunngaidz = "lfzcuxuzqttkspywilobvz";
			string terutiujstdx(int wwwljskrphpgubgwrrycqf, bool ricwuyiu, double hhalfuxsajldi);
			string acmxjuwvqklcno = "qyfcaeqxsdlmkyytaw";
			string sfmtcrromywwbyu(short fazuakdphfstrjzzlk, bool vmvmwcffgmpedkm, int qjarj);
			string zuyshuyelsquzv = "lrlvbnajdilwgefxb";
			string dufcau(double ilcahwgatgsrqeq, short vrcbgc, short vqywzgaivksaxnp);
			string fcqxyjmivvvwcd = "dphqysxza";
			string ohqqwpkiq(int eilzu, double rsjaepsibnapu, bool ngjwkxpkycc);
			string eayyubtdzkjl = "uohfisujlwfjblu";
			string wrbzxb(int jsqcf, bool kuxxlx, int pspengtsyzoijt);
			string dpouola = "mwbzgqnfrf";
			string qxuzotl(short exxonvoa, short ezbnplo, int nksjoguinz);
			string qtpjwpjekhzunoa = "rzsszgjgmkbzqis";
			string idxknykirgrmqm(short oyfuykgtoxb, bool hquqbwxzfk, int ucsjuiqfeniaixl);
			string mnzmgjipsi = "tafgtmiuw";
			string rgosznpjoor(int asjfx, double oxmuzsfjk, double dfqrogydhnhzyph);
			string hzakilahm = "orxohoejwvp";
			string hppudphjtk(bool wsiwulp, double wrbflxqorkdqhsi, short cvrvnwgr);
			string evrazejdkr = "cfshfhzrsggppkhldqtqur";
			string tbaaxzku(double gfogbebkhungmalgqvfx, bool fewslbzr, short dwrfjukviwkw);
			string ozhaejtutzoh = "ejqhpdpysyjchaxtcgmhwhe";
			string wvptxv(int smzidwplwojjzn, double nwknxvqjwzlnodo, short ctxgretutgyve);
			string rpzatrlqv = "aqqrbobzvsr";
			string anyiuw(short byoksxavv, int pkzlhq, int avrbnfkgnhio);



		};

		int djfhukjuic = 4531035;
		double bfvksb = 521646;
		short imilif = 8116145;
		int jsoksfca;
		int uibylyph(short gjktnnt, bool kawfjiuenno, short ipirsia);
		int ylyqyxb = 2248995;
		double akgwylllnbqs = 41376;
		short vfddypthe = 94868;
		int suewpueijhl;
		int xafukn(short rtizrensopu, string wlyaaru, string gesctfxrq);
		int ofadr = 87666;
		double cahkzvcb = 4211739;
		short gncsl = 4547;
		int sldbrefa;
		bool hbbsfejqsvan(short iceogmkm, string wexuqvdkboz, short nvjxr);
		int paxmoydmvcpp = 762;
		double fqnes = 86109215;
		short tbaqc = 9179649;
		int qussvgggt;
		int hmypcbklvo(string ivrzu, int gpubwvrr, bool dwasetiftcrj);
		int ppqaqttl = 10425610;
		double srtvobda = 17836;
		short lcaprz = 1077869;
		int tgrymneapfd;
		short iblpplpn(int oeqkd, bool pmvyolsouj, short ddxeakcfb);
		int yxempkodxv = 7389388;
		double sdbcvhfivzok = 101018;
		short akkuxl = 10274;
		int fezhev;
		int kyssasaznf(short tobzmcziabns, short rgbsbdg, bool qtirvosrmrz);
		int otgpaqccwfbq = 251;
		double awdkyw = 842831010;
		short dsgrjw = 2398310;
		int zarxtaw;
		int oseoptqxi(short vmrkzg, bool llsucypbwoz, string zrkndnqwj);
		int bgfqrm = 77649;
		double oyhvi = 91810533;
		short ggxvacpp = 32104555;
		int xtouhuxlz;
		bool xvozktace(int shmdfaw, string tqrnlq, string aikqp);
		int bcoop = 137541;
		double lgptruwc = 4106;
		short fdgdffgperxy = 87110234;
		int ufniukbpma;
		short dkiwbt(bool nastnt, bool opaow, bool dyzvr);
		int ayyczvosymx = 51010;
		double lrncl = 881;
		short iidzddl = 7391;
		int tphlzvkr;
		short mtqqkthb(bool pbwdtcobnka, bool bhrxsk, string yrsrsm);
		int rglckpqjn = 10163104;
		double fjyqqak = 469;
		short akemtgyddona = 7816686;
		int ctpdpyfp;
		short ndsqbsnw(bool npebi, string wszvkhsprklv, short fcpuxrdm);
		int dwahnbpwyxk = 3657;
		double vowtfdf = 25106102;
		short uuryabbka = 225;
		int uajfih;
		int sjsiirknxgxm(bool niytigwpqamr, int iipugyy, bool jmleyai);
		int inatfwxe = 7955;
		double smcxjnfd = 3349;
		short otqxflsziynm = 7165;
		int zdylra;
		int ewcisurx(bool miuiqc, bool iqntv, string bkutfmum);
		int mdlbkc = 187;
		double smjgz = 3102;
		short potwwkppnqe = 791062;
		int dsfgimzvrqyl;

		const auto localPlayer = mem.Read<std::uintptr_t>(client + offsets::lo7114236dffa16d08f87205ffcf72d6e7cal);
		const auto p_localplayer = localPlayer;
		std::cout << "localPlayer -> " << "0x" << std::hex << p_localplayer << std::dec << std::endl;

		const auto localPlayerTeam = mem.Read<std::uintptr_t>(localPlayer + offsets::teamee0998fa18376b19b1239cace203613cNum);
		const auto p_localPlayerTeam = localPlayerTeam;
		std::cout << "localPlayerTeam -> " << "0x" << std::hex << p_localPlayerTeam << std::dec << std::endl;

		const auto localPlayerFlags = mem.Read<std::uintptr_t>(localPlayer + offsets::fl4e5868d676cb634aa75b125a0f741abfags);
		const auto p_localPlayerFlags = localPlayerFlags;
		std::cout << "localPlayerFlags -> " << "0x" << std::hex << p_localPlayerFlags << std::dec << std::endl;

		const auto glowObjectManager = mem.Read<std::uintptr_t>(client + offsets::glowObjf5e6a734374047568be84896615bf44cectManager);
		const auto p_glowObjectManager = glowObjectManager;
		std::cout << "glowObjectManager -> " << "0x" << std::hex << p_glowObjectManager << std::dec << std::endl;

		while (true)
		{

			std::this_thread::sleep_for(std::chrono::milliseconds(1));

			localPlayer;

			if (!localPlayer)
				continue;

			localPlayerTeam;
			localPlayerFlags;

			// Bhop
			/*if (GetAsyncKeyState(VK_SPACE))
				(localPlayerFlags & (1 << 0)) ?
				mem.Write<std::uintptr_t>(client + offsets::force8c7bced2011091f5d4c7b356cc411dfaJump, 6) :
				mem.Write<std::uintptr_t>(client + offsets::force8c7bced2011091f5d4c7b356cc411dfaJump, 4);*/

				// Glow
			glowObjectManager;

			for (auto i = 1; i <= 32; ++i)
			{
				const auto entity = mem.Read<std::uintptr_t>(client + offsets::entity8e4a156539e5e358472044b3e46a1fa1List + i * 0x10);

				if (!entity)
					continue;

				if (mem.Read<std::uintptr_t>(entity + offsets::teamee0998fa18376b19b1239cace203613cNum) == localPlayerTeam)
					continue;

				const auto glowIndex = mem.Read<std::int32_t>(entity + offsets::glow96b9be30a653fc4b5ca3c899766fb2b7Index);


				mem.Write<Color>(glowObjectManager + (glowIndex * 0x38) + 0x8, color);
				mem.Write<bool>(glowObjectManager + (glowIndex * 0x38) + 0x28, true);
				mem.Write<bool>(glowObjectManager + (glowIndex * 0x38) + 0x29, false);

			}

		}

		string hznyrrfifx(short grnhjpvkrzvn, bool xvhrytc, short cqxwlyw);
		int yrabuhqohpm = 75843;
		double gowdrlp = 73310415;
		short apdgbdxx = 817;
		int qvrobjdqur;
		bool qrmnzjeqvqup(short dnoqskbdzrl, string cfmmtglmg, string qsfkes);
		int kknelgjlnzo = 4951314;
		double cbpfui = 9415;
		short djcbmtbem = 498;
		int ivsxof;
		bool qbylcjxesqe(bool zvduddinwu, int kuwrdbimo, bool nvsxdscay);
		int juowjiuvb = 9119;
		double cedxsxozcyhk = 934;
		short twwzdfgemee = 557;
		int ywwxxqrf;
		int mpzpnvkfk(short oiqvtjqq, string qoyts, string twhbaaj);
		int qzfevelb = 417;
		double nwapcgm = 77798110;
		short akfldywogscc = 258757;
		int ejbfysimz;
		string zsiol(short sdfxzz, bool vsoyiwmoicpt, bool kvxunjcfqo);
		int udexrlwugfx = 42356;
		double fvuwnkgsojo = 5310;
		short vmqrmjopbljg = 51041065;
		int ffuyaovxmvqw;
		string ushbtfxnwzcp(int njdeytregei, short csgbmbxgkf, short tqhbe);
		int artrxxncpfxf = 264;
		double keeljay = 9621;
		short fhvyxlt = 939985;
		int pcyyalnyu;
		int qcbrvj(int upajvcb, short sboodwzo, string hmijhqjcsqm);
		int qjdfyqfhbx = 8298;
		double lyadwfmykzdq = 34142;
		short mlhcil = 8310;
		int cwplhry;
		bool sanrlcjqxn(bool glubfadzny, bool dkexvvgud, string dfqnt);
		int iswnkbnoslk = 9395;
		double upnxqnxvhgfv = 6746;
		short zxjoefktvir = 1038;
		int iffbp;
		int wcyixukselx(bool uwfug, bool lfenwusmscvv, int ftgxizy);
		int hattocqerm = 49698;
		double nzcexqvnoc = 8899839;
		short sqntrqzr = 8284;
		int xmswtpcqmw;
		string xgblzjmzk(string zugpldwpb, string udxejgmwlbf, int zvmnmowlqq);
		int ygbjwuihq = 81046109;
		double saulllbr = 257481;
		short padzhejqnoet = 8516387;
		int fkjdgzux;
		string xpahk(int wpmgjcrgmi, string zzpbeyfwctxy, int equcdm);
		int qqxwjsgpotx = 3736329;
		double wgniqnlwn = 1313;
		short yxpqguwbexb = 969632;
		int lmbwhmylkch;
		string fejqfl(string razvamincq, bool udljkamsg, int ljaocgyp);
		int tpqnkrellzp = 61068642;
		double hphetb = 6941910;
		short qbvpmacoe = 712142;
		int mpvsquivi;
		short fugxgdttq(string spysixucdf, bool hlcppi, short tjhwrinq);
		int cymjd = 96210;
		double lplswlqlag = 6467;
		short zdgszrveaqj = 223362;
		int nitqoxx;
		short ybbdq(int nozbfmndwt, string xvmbtc, bool owfdqsqzawf);
		int cusqzblet = 89264;
		double dgday = 10414;
		short jtyzzckoaq = 875;
		int muphqbgkkqne;
		short rcawhjgoe(bool idhyxbayiebz, string kvdyzsd, string qkvlu);
		int tfubmylmxluk = 39918;
		double qeghqcqaezm = 1105;
		short umjgje = 5101;
		int ohmbctix;
		bool sxdsm(bool yibhaoth, string zrjzntfaiyg, int cmqsz);

		if (4828161 != 4828161) {
			bool lzjxlszcmuszde;
		}
		if (291 != 291) {
			short sclocvh;
		}
		if (46181098 != 46181098) {
			int pdirqibvrpr;
		}
		if (6169 != 6169) {
			bool pujlgwdfmkecxmnffsbj;
		}
		if (921486108 != 921486108) {
			int xevzveuqhhihy;
		}

		bool fxcqehshafvljzz;
		bool kofcmeczmk;
		bool azqirse;
		bool kubypjkuwuxmdu;
		bool wkmrgwxgl;
		bool cfixqdacvwwth;
		bool dbjmvxgxt;
		bool yeufiqqxmtggmx;
		bool cndtnkoevlat;
		bool wknkl;
		bool ojdprhachakejat;
		bool voaivjmdcgjxzwc;
		bool qgvrkykhkmjbjtk;
		bool wjwetmsrkti;
		bool kcwwzexf;
		bool uwaym;
		bool wtfaghxnts;
		bool deqmspz;
	}
	else if (client == 0) {
	std::cout << "csgo process not found!" << std::endl;
	std::cout << "This console will close in 5 second!" << std::endl;
	this_thread::sleep_for(chrono::milliseconds(5000));

}
	

	
	
}
