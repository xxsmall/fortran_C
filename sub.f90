subroutine sub_fortran(NumInt,NumFloat,NumDouble)
      implicit none
      integer :: NumInt
      integer :: NumFloat
      integer :: NumDouble
      NumDouble=NumFloat**NumInt
end subroutine

subroutine sub_add(a,b,c)
      implicit none
      real(8) :: a
      real(8) :: b
      real(8) :: c
      c=a+b
end subroutine

