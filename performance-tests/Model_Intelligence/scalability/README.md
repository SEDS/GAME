## Purpose

The purpose of the metamodels in this directory to is evaluate the
scalability of the GAME's Model Intelligence add-on.

## Test Cases

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

## Installing Scalability Tests

Since the models above are a metamodel, you must first register each
metamodel with GME.

1. Open GME
2. Select **Tools | Register Paradigms...**
3. Click **Add from file...** button
4. Locate one of the metamodels from above to install

## Registering Model Intelligence with Tests

You also need to make sure that GAME Model Intelligence add-on is 
registered with the metamodel you just added. From the same dialog
you used to register the metamodel, do the following:

1. Select the paradigm in the listing, and Click the **Components..* button
2. Select **GAME Model Intelligence**
3. If bottom right button displays **Enable**, continue
4. Select **Both** in **Register:** section at bottom of dialog
5. Click the **Enable** button
6. Click the **Close** button 

## Running Scalability Tests

Each metamodel is designed to test each of the following scenarios
with a different number of modeling elements:

1. How long does it take to create N elements?
2. How long does it take to create N elements, and evaluate a min 
   value attribute constraint?
3. How long does it take to complete a reference to 1 of N elements?
4. How long does it take to complete a reference to 1 of N elements 
   when filtering on a constraint?

The value of N is based on the number in the metamodel.

### Scenario 1

To run this scenerio, creaete a project for one of the metamodels
above. In the project, insert a ```Parent``` model element into the
```RootFolder```. The model intelligence will create ```N``` model
elements.

View the GME console pane. It will display that ```N + 1``` model elements
has been created. It will also display the amount of system and user
time spent creating the elements.

### Scenario 2

To run this scenerio, creaete a project for one of the metamodels
above. In the project, insert a ```ParentAttr``` model element into the
```RootFolder```. The model intelligence will create ```N``` model
elements.

View the GME console pane. It will display that ```N + 1``` model elements
has been created. It will also display the amount of system and user
time spent creating the elements.

### Scenario 3

Open the model element added to the ```RootFolder``` from Scenario 1
above by double-clicking it. It should contain ```N``` model elements. 
Add a ```ChildRef``` model element to the active model. Select any one of 
the elements listed in the dialog box.

View the GME console pane. It will display that ```N + 1``` model elements
has been created. It will also display the amount of system and user
time spent creating the elements.

### Scenario 4

Open the model element added to the ```RootFolder``` from Scenario 2
above by double-clicking it. It should contain ```N``` model elements. 
Add a ```ChildRef``` model element to the active model. Select any one of 
the elements listed in the dialog box.

View the GME console pane. It will display that ```N + 1``` model elements
has been created. It will also display the amount of system and user
time spent creating the elements.