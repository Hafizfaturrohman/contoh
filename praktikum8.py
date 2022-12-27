class Mahasiswa:
  def _init_(self, nama, nim, nilai):
    self.nama = nama
    self.nim = nim
    self.nilai = nilai

  def tampilkan_nilai(self):
    print(f'Nama: {self.nama}')
    print(f'NIM: {self.nim}')
    print(f'Nilai: {self.nilai}')

# Inisialisasi objek Mahasiswa
mahasiswa1 = Mahasiswa('John Doe', '123456', 85)
mahasiswa2 = Mahasiswa('Jane Doe', '654321', 95)

# Menampilkan nilai mahasiswa1
mahasiswa1.tampilkan_nilai()

# Menampilkan nilai mahasiswa2
mahasiswa2.tampilkan_nilai()