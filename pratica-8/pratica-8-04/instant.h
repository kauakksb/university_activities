struct instant {
  int hour;
  int minute;
  int second;
};

/* Initialize the `struct instant` instance pointed to by `init` after
 * parsing the timestamp in `str`.  The timestamp should be in the
 * HH:MM:SS format.  Returns 0 in case of success, and a nonzero value
 * in case of error. */
/* Inicializa a instancia de `struct instant` apontada por `init` apos
 * analisar o timestamp em `str`. O timestamp deve estar no formato
 * HH:MM:SS.  Retorna 0 em caso de sucesso e um valor diferente de zero
 * em caso de erro. */
int instant_parse(const char* str, struct instant *init);

/* Returns 0 if `i` is invalid, and a nonzero value if `i` is valid.  An
 * instant is valid if and only if `hour` is between 0 and 23, minute is
 * between 0 and 59, and if second is between 0 and 59. */
/* Retorna 0 se `i` eh invalido e um valor diferente de zero se `i` eh
 * valido.  Um instante eh valido se, e somente se, `hour` estiver entre
 * 0 e 23, `minute` entre 0 e 59, e `second` entre 0 e 59. */
int instant_check(struct instant i);

/* Returns a negative, zero, or positive value if i1 is earlier than,
 * equal to, or later than i2. */
/* Retorna um valor negativo, zero ou positivo se i1 for anterior, igual
 * ou posterior a i2, respectivamente. */
int instant_compare(struct instant i1, struct instant i2);

/* Reads `n` *valid* instances of `struct instant` from standard input,
 * and place them in vector `v`. Vector `v` *must* have `n` positions to
 * hold the read values. If an invalid instance of `struct instant` is
 * read from standard input, it is ignored and the operation retried
 * until `n` valid instances are read. */
/* Le `n` instancias *validas* de `struct instant` da entrada padrao e
 * as coloca no vetor `v`. O vetor `v` precisa ter `n` posicoes para
 * armazenar os valores lidos.  Se uma instancia invalida de `struct
 * instant` eh lida da entrada padrao, ela eh ignorada e o a leitura
 * repetida ate que `n` instancias validas sejam lidas. */
void instant_read_vector(struct instant *v, int n);

/* Returns the largest (in chronological order) instant in vector `v`.
 * The vector must have exactly `n` elements. */
/* Retorna o maior instante (em ordem cronologica) no vetor `v`.  O
 * vetor deve possuir exatamente `n` elementos. */
struct instant instant_largest(const struct instant *v, int n);