Αρχικά έθεσα  την βοηθητική συνάρτηση collatz_next_term η οποία ελέγχει αν ο αριθμός είναι άρτιος ή περριττός και τα βήματα n=n/2 και n=3*n+1 αντίστοιχα.
Έπειτα θέτω την βασική μου συνάρτηση collatz η οποία ελέγχει αν ο n=1 και τελειώνει την διαδικασία αλλιώς εκτελεί για τον n την collatz_next_term.
Με αυτόν τον τρόπο έχουμε κτίσει την διαδικασία collatz.
Ύστερα ορίζουμε το πόσες μεταβλητές χρειαζόμαστε από τον χρήστη (δηλαδη 2) και δίνουμε την εντολή να εμφανίσει το μύνημα "check your varriants,error" σε περιπτώσεις που δίνουν παραπάνω ή λιγότερες.
Οι μεταβλητές αυτές πρέπει να ειναι μεγαλύτερες του -100000000 και μικρότερες του 100000000 και να είναι θετικές οποτε εξετάζουμε αν τα τηρούν αυτα. Αν δεν τα τηρούν θα εμφανιστεί "0".
Αλλιώς αυτές οι δύο μεταβλητές θα είναι το πάνω και το κάτω όριο . Δηλαδή θα ξεκινήσουμε μέσω μίας επανάληψης να υπολογίζουμε των αριθμών των βημάτων της collatz για κάθε αριθμό ενδιάμεσα στο πάνω και το κάτω όριο (δηλαδή των μεταβλητών που έδωσε ο χρήστης).
Μέσα σε αυτήν την επανάληψη τοποθετήσαμε μία μεταβλητή megisto στην οποία αποθηκεύουμε τον μέγιστο αριθμό βημάτων που χρειάστηκαν ανάμεσα σε αυτά τα όρια και στο τέλος θα εμφανίσει το megisto δηλαδή των μέγιστο αριθμό αυτών των βημάτων.
