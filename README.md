# BukaLapak Programming Contest 3 Online Selection Solution

https://competition.ia-toki.org/contests/116/problems/785/

##ITE - If Then Else

Time limit: 1 s

Memory limit: 64 MB 


**Deskripsi**

Pak Dengklek meminta Anda membuat sebuah program sebagai berikut. Program akan menerima sebuah bilangan bulat N. Jika N adalah bilangan bulat positif, cetak positif. Jika N adalah bilangan bulat negatif, cetak negatif. Selain itu (yakni jika N adalah nol), cetak nol.

**Format Masukan**

Sebuah berisi sebuah bilangan bulat N.

**Format Keluaran**

Sebuah baris berisi keluaran sesuai permintaan soal.

**Contoh Masukan 1**
```
2
```
**Contoh Keluaran 1**
```
positif
```
**Contoh Masukan 2**
```
0
```
**Contoh Keluaran 2**
```
nol
```
**Contoh Masukan 2**
```
-2
```
**Contoh Keluaran 2**
```
negatif
```
**Batasan**
```
-100.000 ≤ N ≤ 100.000
```
	
##BV - Bono v2.0

Time limit: 1 s

Memory limit: 64 MB

 
**Deskripsi**

Kang dan Kung adalah sepasang teman yang senang bermain Board Games (permainan papan). Namun, mereka hanya senang bermain Board Games yang deterministik, yaitu tidak mengandung unsur random(acak), seperti catur. Karena Board Games yang deterministik jumlahnya sedikit, mereka memutuskan untuk membuat permainan baru. Permainan ini mereka namakan "Bono". 

Aturan permainan Bono sederhana. Papan permainan Bono adalah sebuah tabel dengan 3 baris dan 3 kolom. Permainan dilakukan secara bergiliran antara 2 pemain. Pada setiap giliran, pemain harus mengisi salah satu sel yang kosong di tabel dengan sebuah sayur kangkung. Kangkung yang telah diletakkan di sel tidak boleh dipindahkan. Tabel akan hancur dengan sendirinya apabila ada baris atau kolom atau diagonal yang berisi 3 sayur kangkung. Pemain dinyatakan kalah apabila tidak dapat meletakkan kangkung di tabel pada gilirannya.

Tentu saja, pemain pertama akan selalu menang apabila dia bermain secara optimal. Oleh karena itu, diciptakanlah Bono v2. Pada Bono v2, jumlah tabel dalam 1 permainan dapat mencapai sebanyak N (N<=1000). Dalam setiap giliran, pemain bebas meletakkan sebuah sayur kangkung pada satu sel yang kosong di tabel yang belum hancur. Pemain dinyatakan kalah apabila tidak dapat meletakkan kangkung di tabel pada gilirannya.

Kang dan Kung memutuskan untuk bermain Bono v2 sebanyak T kali (T<=1000). Kang selalu menjadi pemain pertama dan mereka berdua bermain secara optimal. Untuk setiap permainan, siapakah yang akan menang?

**Format Masukan**

Baris pertama masukan berisikan sebuah bilangan T, banyaknya permainan. (T<=1000)
Untuk setiap permainan, baris pertama berisi sebuah bilangan N, yaitu banyaknya tabel pada permainan tersebut. (N<=1000)

**Format Keluaran**

Untuk setiap permainan, keluarkan satu baris yang berisi nama pemenang.

**Contoh Masukan**
```
1
1
```
**Contoh Keluaran**
```
Kang
```


##MT - Mengecat Topi

Time limit: 1 s

Memory limit: 64 MB

 
**Deskripsi**

Untuk persiapan pesta ulang tahun Jeffroy, ibunya yang bernama Cirsie memberi tugas kepada karyawan-karyawannya untuk mengecat topi yang akan digunakan saat pesta. Semua topi berbentuk kerucut dengan tinggi H unit dan jari-jari lubang topi R unit. Cirsie dan para karyawannya pun pergi untuk membeli cat yang akan digunakan. Namun karena tidak ada tempat untuk menyimpan cat, maka semua cat yang digunakan akan disimpan di dalam topi-topi itu sendiri. Tentu saja, cat maksimal yang dapat disimpan dalam setiap topi sama dengan volume topi tersebut.

Ilustrasi penyimpanan cat dalam topi:

Diketahui bahwa setiap 1 unit volume cat dapat mengecat 1 unit luas topi. Agar biaya yang dikeluarkan seminimal mungkin, banyaknya cat yang dibeli harus tepat habis digunakan untuk mengecat setiap topi. Untuk itu, setiap topi akan diisi cat sampai setinggi h. Cat di dalam topi tersebut harus tepat habis digunakan untuk mengecat keseluruhan topi, yaitu sisi luar dan dalam (abaikan ketebalan topi). Bagian topi yang sudah terkena cat saat penyimpanan tidak perlu dicat lagi. Apabila kapasitas topi tersebut tidak cukup untuk menampung cat yang dibutuhkan, maka cat hanya diisi sampai topi tersebut penuh.

**Format Masukan**

Baris pertama masukan berisi N, yaitu banyaknya pesta ulang tahun (1<=N<=10000). N baris berikutnya berisi deskripsi topi yang digunakan pada pesta tersebut, berisi 2 bilangan bulat yaitu R dan H (1<=R,H<=100).

**Format Keluaran**

Untuk setiap pesta ulang tahun keluarkan h, yaitu tinggi cat dalam setiap topi yang dibeli Cirsie. Tampilkan hasil sampai 6 angka di belakang koma.

**Contoh Masukan**
```
3
4 6
6 4
2 10
```
**Contoh Keluaran**
```
5.874692
3.916461
10.000000
```



##S - Stiker

Time limit: 2 s

Memory limit: 64 MB


**Deskripsi**

Bukalapak baru saja merayakan ulangtahunnya yang ke-6!  Salah satu event yang diadakan dalam rangka merayakan hal ini adalah Bukalapak Programming Contest (BLPC). Ya, partisipasi Anda turut memeriahkan acara ulang tahun Bukalapak! :D

Meskipun ulangtahun ke-7 masih lama, namun persiapan untuk merayakannya telah dilakukan oleh pihak Bukalapak dari saat ini.

Salah satu hal yang direncanakan pada perayaan ulangtahun Bukalapak yang ke-7 adalah penyelenggaraan Bukalapak Bike for Fun (BBF), yang akan diadakan di kota Yogyakarta.

Salah satu hal yang akan dibagikan oleh pihak Bukalapak kepada peserta BBF nantinya adalah stiker bertuliskan “BL” dalam format ascii-art (yaitu susunan karakter: '.' dan '#').
```
.............
.####..#.....
.#...#.#.....
.#...#.#.....
.####..#.....
.#...#.#.....
.#...#.#.....
.####..#####.
.............
```
Untuk menghemat biaya pembuatan stiker dalam jumlah banyak, pihak Bukalapak membeli sebuah printer untuk dapat mencetak stiker dalam jumlah banyak sekaligus. Printer tersebut diketahui dapat mencetak sebanyak R*C stiker sekaligus (R menyatakan banyak baris stiker yang dicetak, C menyatakan banyak kolom stiker yang dicetak). Perhatikan bahwa pada tampilan/format stiker, terdapat ruang/space kosong pada sisi atas-kiri-kanan-dan-bawah dari stiker dengan lebar sebesar satu satuan karakter. Namun, ruang/space kosong akan tetap selebar satu satuan karakter meskipun tampilan stiker dicetak secara atas-bawah atau kiri-kanan. Untuk jelasnya, silakan lihat contoh masukan/keluaran.

Sayangnya, tidak seorangpun software engineer dari pihak Bukalapak memiliki waktu untuk membuat program untuk printer tersebut agar dapat mencetak stiker-stiker tersebut. Anda, sebagai salah seorang programmer handal, diminta untuk membantu pihak Bukalapak untuk membuat program tersebut.

**Format Masukan**

Masukan terdiri dari dua buah bilangan bulat positif R dan C (R, C ≤ 100).

**Format Keluaran**

Keluarkan hasil pencetakan R*C stiker BL.

**Contoh Masukan**
```
1 3
```
**Contoh Keluaran**
```
.....................................
.####..#.....####..#.....####..#.....
.#...#.#.....#...#.#.....#...#.#.....
.#...#.#.....#...#.#.....#...#.#.....
.####..#.....####..#.....####..#.....
.#...#.#.....#...#.#.....#...#.#.....
.#...#.#.....#...#.#.....#...#.#.....
.####..#####.####..#####.####..#####.
.....................................
```
**Contoh Masukan**
```
3 1
```
**Contoh Keluaran**
```
.............
.####..#.....
.#...#.#.....
.#...#.#.....
.####..#.....
.#...#.#.....
.#...#.#.....
.####..#####.
.............
.####..#.....
.#...#.#.....
.#...#.#.....
.####..#.....
.#...#.#.....
.#...#.#.....
.####..#####.
.............
.####..#.....
.#...#.#.....
.#...#.#.....
.####..#.....
.#...#.#.....
.#...#.#.....
.####..#####.
.............
```
