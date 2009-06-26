dependon systype compile load
formake 'rm -f sysdeps'
formake 'cat systype compile load >> sysdeps'
rm -f sysdeps
cat systype compile load
exit 0
