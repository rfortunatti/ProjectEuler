program euler_p20

    integer(kind=8) poli100
    poli100 = 1

    do n = 100, 0, -1
        poli100 = poli100 * (n-1)
    end do

    write(*,*) poli100
end program


