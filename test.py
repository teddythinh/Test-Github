a = input()

sub = 'pa','pe', 'pi', 'po', 'pu'
if sub in a:
    print(1, end=' ')
if sub in b:
    print(2, end=' ')
if sub in c:
    print(3, end=' ')
if sub in d:
    print(4, end=' ')
if sub in e:
    print(5, end=' ')
if not sub in a and not sub in b and not sub in c and not sub in d and not sub in e:
    print("HE GOT AWAY!")


