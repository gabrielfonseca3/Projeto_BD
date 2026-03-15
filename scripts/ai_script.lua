-- Script gerado por IA para popular o inventário

books = {}

titles = {
  "1984", "Brave New World", "Fahrenheit 451", "The Hobbit", "The Lord of the Rings",
  "To Kill a Mockingbird", "Moby-Dick", "Pride and Prejudice", "War and Peace",
  "The Great Gatsby", "Crime and Punishment", "The Catcher in the Rye",
  "The Brothers Karamazov", "Anna Karenina", "Don Quixote", "The Odyssey",
  "The Iliad", "Dune", "Foundation", "Neuromancer", "Snow Crash",
  "The Name of the Wind", "The Way of Kings", "Mistborn", "The Alchemist",
  "The Little Prince", "The Road", "The Stand", "It", "Dracula", "Frankenstein"
}

authors = {
  "George Orwell", "Aldous Huxley", "Ray Bradbury", "J.R.R. Tolkien",
  "Harper Lee", "Herman Melville", "Jane Austen", "Leo Tolstoy",
  "F. Scott Fitzgerald", "Fyodor Dostoevsky", "J.D. Salinger",
  "Miguel de Cervantes", "Homer", "Frank Herbert", "Isaac Asimov",
  "William Gibson", "Neal Stephenson", "Patrick Rothfuss",
  "Brandon Sanderson", "Paulo Coelho", "Antoine de Saint-Exupéry",
  "Cormac McCarthy", "Stephen King", "Mary Shelley", "Bram Stoker"
}

languages = {
  "English", "Spanish", "French", "German", "Portuguese", "Italian"
}

math.randomseed(os.time())

for i = 1, 2000 do
  local title = titles[math.random(#titles)] .. " " .. i
  local author = authors[math.random(#authors)]
  local language = languages[math.random(#languages)]

  local isbn =
      "978-" ..
      math.random(1, 9) .. "-" ..
      math.random(100, 999) .. "-" ..
      math.random(100000, 999999)

  books["Book" .. i] = {
    Title = title,
    Author = author,
    Language = language,
    ISBN = isbn,
    Pages = math.random(120, 900),
    Price = math.random(10, 60) + math.random(),
    ID = 0
  }
end
