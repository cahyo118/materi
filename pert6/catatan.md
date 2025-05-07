# Catatan: Sorting dan Hashing

## 📌 1. Sorting (Pengurutan)

### Pengertian
Sorting adalah proses mengurutkan data dalam urutan tertentu (menaik atau menurun). Tujuannya agar data lebih mudah dicari, dibaca, atau diolah.

### Jenis-Jenis Algoritma Sorting
| Algoritma       | Kecepatan      | Stabil | Cocok untuk         |
|-----------------|----------------|--------|----------------------|
| Bubble Sort     | Lambat (O(n²)) | Ya     | Data kecil           |
| Selection Sort  | Lambat (O(n²)) | Tidak  | Mudah dipahami       |
| Insertion Sort  | Lumayan cepat untuk data kecil | Ya | Data kecil atau hampir terurut |
| Merge Sort      | Cepat (O(n log n)) | Ya | Data besar, butuh ruang ekstra |
| Quick Sort      | Sangat cepat (rata-rata O(n log n)) | Tidak | Umum digunakan, efisien |

---

## 📌 2. Hashing

### Pengertian
Hashing adalah teknik untuk **menyimpan dan mengambil data dengan cepat** menggunakan **hash function**. Biasanya dipakai di struktur data seperti **Hash Table**.

### Cara Kerja
- Hash function mengubah kunci (key) menjadi indeks.
- Data disimpan pada indeks tersebut.
- Untuk mencari data, cukup hash kuncinya dan akses indeks yang sesuai.

### Contoh Aplikasi
- Lookup data cepat (misal: kamus kata)
- Deteksi duplikat
- Penyimpanan pasangan key-value

### Istilah Penting
- **Hash function**: Fungsi untuk menghasilkan indeks dari key.
- **Collision**: Ketika dua key menghasilkan indeks yang sama.
- **Chaining / Open Addressing**: Teknik untuk menangani collision.

---

## 🔄 Perbandingan Singkat

| Aspek         | Sorting                    | Hashing                     |
|---------------|-----------------------------|------------------------------|
| Tujuan        | Mengurutkan data            | Menyimpan & mengambil data cepat |
| Output        | Data terurut                | Data tidak harus terurut     |
| Kompleksitas  | Paling efisien O(n log n)   | Paling efisien O(1) untuk akses |
| Contoh struktur data | Array, List, Tree      | Hash Table, Hash Map         |

---

## 📝 Catatan Nyata / Penggunaan di Dunia Nyata

### Sorting:
- **E-commerce**: Mengurutkan produk berdasarkan harga atau rating.
- **Database**: Menjalankan query `ORDER BY`.
- **Search engine**: Menampilkan hasil pencarian dari paling relevan ke tidak relevan.
- **Aplikasi musik/video**: Urutkan berdasarkan tanggal, judul, atau popularitas.

### Hashing:
- **Password Storage**: Password tidak disimpan langsung, tapi dalam bentuk hash.
- **Dictionary / Kamus elektronik**: Cari arti kata dengan sangat cepat.
- **Compiler**: Cek duplikat identifier atau simbol.
- **Blockchain**: Menggunakan hashing untuk keamanan dan integritas data.

---

## Referensi Tambahan
- Visualisasi Sorting: [https://visualgo.net/en/sorting](https://visualgo.net/en/sorting)
- Visualisasi Hashing: [https://visualgo.net/en/hashtable](https://visualgo.net/en/hashtable)
