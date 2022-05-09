#include "fvCFD.H"
int main(int argc, char *argv[])
{
    Foam::argList::noBanner();
    Foam::argList args(argc, argv)

    Foam::Time runtime //creating a runTime object
    (
        Foam::Time::controlDictName,
        args.rootPath(),
        args.caseName()
    );

    Foam::fvMesh mesh // creating a mesh object
    (
        Foam::IOobject
        (
            Foam::fvMesh::defaultRegion,
            runtime.timeName(),
            runTime,
            Foam::IOobject::MUST_READ
        )
    );

    IOdictionary thermalProperties
    (
        IOobject //Creating an IO object
        (
            "T",
            "thermalProperties",
            runTime,
            IOobject::MUST_READ,
            IOobject::No_WRITE
        );

        Scalar T = scalar(ioDictObj.lookup("T"));

        Info<<T<<"\n";
    )


}