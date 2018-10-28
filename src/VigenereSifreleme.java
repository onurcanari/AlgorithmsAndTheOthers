public class VigenereSifreleme {
    final static String alfabe = "abcdefghijklmnopqrstuvwxyz";
    private final static int alfabeUzunluk = alfabe.length();

    private String mesaj, sifre;
    private int mesajUzunluk, sifreUzunluk;

    private StringBuilder sifreliMesaj = new StringBuilder();
    VigenereSifreleme(String mesaj,String sifre){
        this.mesaj = mesaj;
        this.sifre = sifre;
        mesajUzunluk = mesaj.length();
        sifreUzunluk = sifre.length();
    }
    public void mesajSifrele(){
        int harfDegeri=0;
        for(int i=0;i<mesajUzunluk;i++){
            harfDegeri += alfabedeAra(mesaj.charAt(i));
            harfDegeri += alfabedeAra(sifre.charAt(i % sifreUzunluk));
            sifreliMesaj.append(alfabe.charAt(harfDegeri % alfabeUzunluk + 1));
            harfDegeri=0;
        }
    }
    public int alfabedeAra(char ch){
        for(int i=0;i<alfabeUzunluk;i++){
            if(alfabe.charAt(i) == ch){
                return i % alfabeUzunluk;
            }
        }
        System.out.println("Alfabede Ara HATA: return -1");
        return -1;
    }
    public StringBuilder getSifreliMesaj() {
        return sifreliMesaj;
    }
    public String getMesaj() {
        return mesaj;
    }
    public void setMesaj(String mesaj) {
        this.mesaj = mesaj;
        mesajUzunluk = mesaj.length();
    }
    public String getSifre() {
        return sifre;
    }
    public void setSifre(String sifre) {
        this.sifre = sifre;
        sifreUzunluk = sifre.length();
    }
}
