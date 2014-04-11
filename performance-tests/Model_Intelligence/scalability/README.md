
== Purpose

The purpose of the metamodels in this directory to is evaluate the
scalability of the GAME's Model Intelligence add-on.

== Test Cases

The following test cases are in this directory:

* model-10.xme
* model-100.xme
* model-1000.xme
* model-10000.xme

Each of the models above is a GME metamodel. The number in the file
name represents the cardinality constraint that determine how many 
child elements must be auto-generated in the model. Since each newly
generated model element triggers a chain of events, its not as simple
as generating ```N``` elements at once.

== Installing Scalability Tests

Since the models above are a metamodel, you must first register each
metamodel with GME.

1. Open GME
2. Select **Tools | Register Paradigms...**
3. Click **Add from file...** button
4. Locate one of the metamodels from above to install

== Registering Model Intelligence with Tests

You also need to make sure that GAME Model Intelligence add-on is 
registered with the metamodel you just added. From the same dialog
you used to register the metamodel, do the following:

1. Select the paradigm in the listing, and Click the **Components..* button
2. Select **GAME Model Intelligence**
3. If bottom right button displays **Enable**, continue
4. Select **Both** in **Register:** section at bottom of dialog
5. Click the **Enable** button
6. Click the **Close** button 

== Running Scalability Tests

