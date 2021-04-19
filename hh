i=1;
R=3000;
while R<1E8
    if R>5E5
        R=R+1E5
    else 
    R=R+1000;
    end
    NR(i)=R;
     i=i+1;
end

ed=[0.00001 0.00005 0.0001 0.0002 0.0004 0.0006 0.0008 0.001 0.002 0.004 0.006 0.008 0.01 0.015 0.02 0.03 0.04 0.05];
for j=1:length(NR)
for i=1:length(ed)
aux= (-2.*log10(ed(i)/3.7065-5.0452/NR(j)*log10(ed(i)^1.1098/2.8257+5.8506/NR(j)^0.8981)))^2;
f(i,j)=1/aux;
end
end 
hold on 
for i=1:length(ed)
loglog(NR,f(i,:))
end
