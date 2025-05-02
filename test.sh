make retest

echo "Test 1: Simple line"
echo "As i walk through the valley of the shadow of death" | ./test

echo -e "\nTest 2: Multiple lines"
echo -e "As I walk through the valley of the shadow of death
I take a look at my life and realize there's nothin' left
'Cause I've been blastin' and laughin' so long that
Even my momma thinks that my mind is gone
But I ain't never crossed a man that didn't deserve it
Me be treated like a punk, you know that's unheard of
You better watch how you talkin' and where you walkin'
Or you and your homies might be lined in chalk
I really hate to trip, but I gotta loc
As they croak, I see myself in the pistol smoke
Fool, I'm the kinda G the little homies wanna be like
On my knees in the night, sayin' prayers in the streetlight
Been spendin' most their lives
Livin' in a gangsta's paradise
Been spendin' most their lives
Livin' in a gangsta's paradise
Keep spendin' most our lives
Livin' in a gangsta's paradise
Keep spendin' most our lives
Livin' in a gangsta's paradise
Look at the situation they got me facing
I can't live a normal life, I was raised by the street
So I gotta be down with the hood team
Too much television watchin', got me chasing dreams
I'm a educated fool with money on my mind
Got my ten in my hand and a gleam in my eye
I'm a loc'd out gangsta, set trippin' banger
And my homies is down, so don't arouse my anger
Fool, death ain't nothin' but a heart beat away
I'm livin' life do or die, what can I say?
I'm 23 now but will I live to see 24?
The way things is going I don't know
Tell me why are we so blind to see
That the ones we hurt are you and me?
Been spendin' most their lives
Livin' in a gangsta's paradise
Been spendin' most their lives
Livin' in a gangsta's paradise
Keep spendin' most our lives
Livin' in a gangsta's paradise
Keep spendin' most our lives
Livin' in a gangsta's paradise
Power and the money, money and the power
Minute after minute, hour after hour
Everybody's runnin', but half of them ain't lookin'
It's going on in the kitchen, but I don't know what's cookin'
They say I gotta learn, but nobody's here to teach me
If they can't understand it, how can they reach me?
I guess they can't, I guess they won't
I guess they front, that's why I know my life is out of luck, fool
Been spendin' most their lives
Livin' in a gangsta's paradise
Been spendin' most their lives
Livin' in a gangsta's paradise
Keep spendin' most our lives
Livin' in a gangsta's paradise
Keep spendin' most our lives
Livin' in a gangsta's paradise
Tell me why are we so blind to see
That the ones we hurt are you and me?
Tell me why are we so blind to see
That the ones we hurt are you and me?" | ./test

echo -e "\nTest 3: Empty lines"
echo -e "\n\n\n\n" | ./test

echo -e "\nTest 4.1: Empty lines"
echo -e "\n\n\n\nLine\n" | ./test

echo -e "\nTest 4.2: Empty lines"
echo -e "\n\n\n\n Line \n" | ./test

echo -e "\nTest 4.3: Empty lines"
echo -e "Line 1\nLine 2\nLine 3\nLine 4\nLine 5\nLine 6" | ./test

echo -e "\nTest 5: Special Characters"
echo -e "Tab\tCharacter\nBackslash \\ and quotes \" \nLine\n" | ./test

echo -e "\nTest 6: Very long line"
python3 -c "print('X' * 2500)" | ./test

echo -e "\nTest 7: No Newline"
echo -e "Tab" | ./test

echo -e "\nTest 8: Whitespace Lines"
echo -e "       \n\t\n Normal Line" | ./test

echo -e "\n======= ALL TEST COMPLETED ======="
