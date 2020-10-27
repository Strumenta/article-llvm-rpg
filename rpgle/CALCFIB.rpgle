      * Calculates number of Fibonacci in an iterative way
     D NBR             S              8  0
     D RESULT          S              8  0 INZ(0)
     D COUNT           S              8  0
     D A               S              8  0 INZ(0)
     D B               S              8  0 INZ((A + 1))
     C     *entry        plist
     C                   parm                    ppdat
      *
     C                   EVAL      NBR = 55
     C                   EXSR      FIB
     C                   DSPLY     RESULT
      *--------------------------------------------------------------*
     C     FIB           BEGSR
     C                   EVAL      COUNT = 0
     C                   SELECT
     C                   WHEN      NBR = 0
     C                   EVAL      RESULT = 0
     C                   WHEN      NBR = 1
     C                   EVAL      RESULT = 1
     C                   OTHER
     C                   FOR       COUNT = 2 TO NBR
     C                   EVAL      RESULT = A + B
     C                   EVAL      A = B
     C                   EVAL      B = RESULT
     C                   DSPLY     RESULT
     C                   ENDFOR
     C                   ENDSL
     C                   ENDSR
     C                   SETON