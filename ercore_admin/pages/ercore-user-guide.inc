<?php
/**
 * @file
 * File for the ERCore Admin Guide Page.
 */

/**
 * Constructs the epscor admin guide.
 *
 * Our menu maps this function to the path 'epscor/admin-guide'.
 */
function ercore_user_guide_callback() {
  return array(
    '#markup' =>
    t('<h2>Introduction</h2>
<p>This guide has been developed for first time users of the EPSCoR Core
Reporting site (ER-Core).  This site has been developed using Drupal 7, an
open-source content management system. Whether you are a developer, tester,
administrator or an end user, we all need to get familiar with Drupal first.
In addition, this guide also introduces important terms used by the NSF EPSCoR
program and how those terms are interpreted by the system.  This relationship
is important for system administrators to understand to be able to deliver
reporting data to NSF with confidence.</p><p>In general, most of the data
requested by this reporting system will be viewable by the public, but in order
to enter new, edit, or download the compiled tables you will need to have an
account and be logged in.</p>
<h2 id="request-account">Request an Account</h2>
<ul>
<li>In your web browser, visit your jurisdiction\'s hosted Drupal site. For UNH
go to http://solstice.sr.unh.edu/</li>
<li>Select on the "<em>Create new account</em>" link located in the gray box at
the top left hand side of the home page. <em>This varies by site.</em></li>
<li>There are 4 pages that require information, which are designated as tabs:
    <ol><li>Contact Information</li>
    <li>EPSCoR Involvement
        <ul>
				<li><em>Most Senior Project Role:</em> use the drop down to select one
				role which best represents your primary role with EPSCoR</li>
				<li><em>If you are a Student Mentoring Plan Sign Off Date:</em> enter
				the month and year your advisor signed off on your mentoring plan.</li>
				<li><em>Please select which project component(s) you will participate
				in:</em> The items in this selection are determined in the
				customization step of installing the ER-Core module. If a component you
				will be working on is not listed, contact your director. Otherwise,
				check those components you will be involved with.</li>
				</ul>
		</li>
		<li>Institution</li>
		<li>Account Information</li>
		</ol>
</li>
<li>Click on Create New Account when you are done. This generates an email sent
to the Web Master who needs to approve the request. </li>
<li>An email will be sent when your account is approved</li>
</ul>
<h2 id="log-in">Log In</h2>
<p>Once the Web Master has approved your account, an email will be sent to you.
In it will be directions to log in and include a link to visit the site.  In
this example we use the New Hampshire\'s development site.  In your web browser,
visit the URL to your jurisdiction\'s web site.  Your program administrator
needs to give this to you.</p>
<h2 id="user">User Profile</h2>
<p>The system greatly depends on complete and accurate user data.  Please
complete all the fields presented to you in the user profile.  The final data
is only as good as the data you enter.</p>
<p>After you login you will be taken to your User Profile home page.  At any
point in time you need to get back to your user account, scroll to the top of
any page and look in the black menu bar for your user name.  It actually
says, "<em>Hello (user)</em>".  Click on your name and you will be taken to your
user account.</p>
<p>Near your user-name is a row of tabs. The most important of those are the View and
the Edit tabs.  Clicking either will give you that functionality (click Edit to
edit, and View to view your profile\'s content).</p>
<p>Below your photo (once you have uploaded one) is a block of horizontal tabs
of grouped information. The other tabs are Contact, Demographics, EPSCoR
Involvement,  Institution, and Data Collection.  Clicking on those tabs will
take you to that information.  Once in a View of our choice, clicking on Edit
will allow you to edit that content.</p>
<h3>Contact Information</h3>
<ol><li>Select on the "<em>Hello (username)</em>" link at the top right of any
page (after you are logged in)</li>
<li>Select on the Edit tab</li>
<li>Select on the Contact Information tab if you are not already there</li>
<li>The red asterisk after a field means that the data is required.  You will
not be able to save the form unless all required fields have been completed.</li>
<li>First and Last name are required fields as part of your user profile. </li>
<li>Phone fields (mobile and work), Work Address and Professional Link are
optional fields.</li>
<li>Click Save to save your contact information.</li>
</ol>
<h3>Demographics</h3>
<p>NSF requires that we try to obtain demographic data for all our participants,
including those attending EPSCoR sponsored events.  Given such a requirement,
it is OPTIONAL to you if you want to submit it or not.  This data will be
encrypted and disassociated from your name.  Only the counts of the various
entries will be submitted to NSF.</p>
<ol>
<li>Select the appropriate radio buttons that best describes your demographics.
<br /><em>In the case where you have multiple disabilities, citizenships or
	races, select the one that best describes you.</em></li>
<li>Check the "<em>I am a veteran</em>" check box if you are a veteran</li></ol>
<h3>EPSCoR Involvement</h3>
<h4>Most Senior Project Role <em>(Required)</em></h4>
<ul><li>Select the one position type that best describes your involvement with
EPSCoR.  This list is defined by NSF Fastlane. If a position type is not listed
that better defines your involvement, select the Other option.</li></ul>
<h4>EPSCoR Leadership Team <em>(Required)</em></h4>
<ul><li>Select the option that best fits your role.</li></ul>
<h4>Project Component(s) <em>(Required)</em></h4>
<p>Components are analogous to teams and are unique to each jurisdiction.
Components can easily be changed by an administrator or Drupal developer.</p>
<ul>
<li>Select the project component of which you are involved</li>
<li>Select multiple components if you are involved with more than one</li>
<li>If a component you are involved with is not listed, contact your
administrator</li></ul>
<h4>Please select which boards or committees you will be a member of</h4>
<ul><li>Select one or multiple <em>(if applicable)</em></li></ul>
<h4>Participating Date</h4>
<ul><li>Enter the date you officially began participating with EPSCoR.  Clicking the
Add another item will allow you to add multiple Participating Dates</li></ul>
<h4>Hire Date</h4>
<ul><li>Enter the date that you were first hired by EPSCoR (if applicable). This
would be the date that you started getting paid.</li></ul>
<h3>Are you paid by the EPSCoR grant <em>(Required)</em></h3>
<ul><li>Select the option that best fits your role.</li>
<li>If yes, the option for Months of Direct Funding will appear. From the drop
down, select how many months of direct funding you receive. Round up or down to
the nearest month of funding you are expected to receive.</li></ul>
<h4>Do you participate in EPSCoR research more than 160 hours per year</h4>
<p>This ties into NSF Fastlane and refers to whether or not you put in more
than 160 hours of effort in a year to this EPSCoR grant, whether you are paid
or not</p>
<ul>
<li>Select the appropriate radio button with respect to the number of hours you
participate in this EPSCoR grant in a year</li>
<li>If yes, please select the nearest person month of effort in EPSCoR</li>
<li>Select a number from the drop down box and round up or down to the nearest
month of funding you are expected to receive.</li></ul>
<h4>Please describe role and contribution to the project</h4>
<ul><li>Include information about what you are doing, in which projects, who you are
working with, location, dates and your contribution.</li></ul>
<h3>RCR - Responsible Conduct of Research</h3>
<ul><li>Select the "<em>I have completed the RCR training</em>" check box if you have taken
either in-person or on-line versions of the RCR training.</li></ul>
<ul>
<li>RCR In-Person: Enter the month, day and year of when you took the in-person
course</li>
<li>RCR In-Person Upload: Upload a txt, word or pdf of your certificate</li>
<li>RCR On-Line: Enter the date you took the RCR online training</li>
<li>RCR On-Line Upload: attach the txt, word or pdf of your online RCR
certificate</li></ul>
<h3>Institution</h3>
<ul><li>Select the radio button of the institution you are affiliated with.</li></ul>
<p>Department: Enter in the name of the department for which you are
affiliated</p>
<h3>Data Collection</h3>
<p>Check the "<em>I plan to be collecting data through my research</em>" check
box if you anticipate collecting data as a result of your research.</p>
<p>Has this user been put in touch with the Data Manager?: Check the
appropriate button for your situation.  This will send notices to the
EPSCoR administrator as well as the data repository manager.</p>
<h3>Account Information</h3>
<ol>
<li>Username: The system user name is determined by the website administrator
upon account creation. This is a required field </li>
<li>Current Password: This is your current (non-visible) password and can be
reset by clicking on the "<em>Request new password</em>" link near your Current
password field or by entering a new Password in the two fields below your E-mail
address. <strong>Some jurisdictions may block this setting.</strong></li>
<li>E-mail address: This will need to be A valid e-mail address. All e-mails
from the system will be sent to this address. The e-mail address is not made
public and will only be used if you wish to receive a new password or wish to
receive certain news or notifications by e-mail.  This is a required field.
<li>Status:  This determines whether or not you or a user can login to the
system.  Leave it Active.</li>
<li>Roles:  These roles are the technical Drupal roles created to designate who
can see or access what.  Different from Involvement, which is the role or hat
one wears with respect to their participation within EPSCoR.  It is strongly
recommended that EPSCoR staff review the Roles and Permissions page to suit
your needs at your local area. Below is what is provided in the default EPSCoR
Reporting Core module. The standard roles are as follows:
	<ul>
  <li>Anonymous User:  This role is used for users that don\'t have a user
  account or that are not authenticated.</li>
	<li>Authenticated user:  This role is automatically granted to all logged
	in users(simply means that you have an account in Drupal). </li>
  <li>Guest: Very limited role with access to view ERCore module functionality
  only. </li>
  <li>Student:  Identical to Faculty out - of - the - box. An important
  designation technically, but left up to the jurisdiction to further restrict
  or grant access to specific areas.</li>
  <li>Faculty:  A subset of EPSCoR Administrator generally restricting the
  ability to edit other\'s content</li>
	<li>Administrator Staff: A subset of Site Administrator and EPSCoR
	Administrator, restricting access to the more technical aspects of Drupal and
	EPSCoR reporting</li>
 	<li>Administrator: Access to any and all Drupal capabilities</li></ul>
</li></ol>
<h3>Participant Date</h3>
<ol>
<li>Click the "<em>Show end date</em>" check box if you are back-entering data
and know the day that you or the user\'s end participation date </li>
<li>Select the month, day and year of the day you started participating with
EPSCoR</li>
<li>If you checked the "<em>Show end date</em>" box, a "to" date group will
appear. Enter the last day of your participation with EPSCoR </li>
<li>Participant Date 2:  use the second grouping of dates if you had at one
time been participating, then ceased, and now are involved again. Enter your
new start date of when you became involved the second time.</li>
<li>Click the "Show end date" box if you know the end date of your second
involvement</li>
<li>Use the "<em>Add another item</em>" to add a PARTICIPANT DATE 3 group.</li>
<li>You can also rearrange the dates by a click -and-drag of the 4 - way arrow
icon to the left of the date group.</li></ol>
<h3>Administrative Overlay</h3>
<p>Disregard this option if you see it.</p>
<h3>Upload a photo</h3>
<p>Click on the Choose file button to browse and upload a photo.</p>
<h3>Locale Settings</h3>
<p>Select your locale setting. This will configure Drupal to show date and time
to your location.</p>
<h3>Save</h3>
<p>Click the Save button when you are done. If any required fields are
incorrectly or not answered, an error message will be displayed at the top of
the page. Read it and address the issue.  If for some reason you cannot address
the issue, call your EPSCoR administrator or your Drupal web site manager for
help.</p>
<h2 id="enter-data">Entering Reporting Data</h2>
<p>This guide is written with the assumption that you are working with a default
ERCore installation. Logged in userss will see a black menu across the top of
the browser, just under the tabs of the browser. The default ERCore
installation will show this administrative menu and this guide is written
assuming it is visible. Each jurisdiction will have the option to change the
layout of the site and how menus look and are placed.</p>
<p>The 4th link from the left in the black administration menu is Content.
Hover your mouse over the link to see nested drop down menus. Hover over the
Add Content link to expand yet a 2nd nested menu list that contains links to
the default forms that come with standard Drupal installation, plus links to
the ERCore reporting forms, and custom jurisdictional forms.</p>
<p>Hover over the Content link to show the expanded menu and click on the Add
Content link. You will see a page that has the various types of content you can
add grouped into the headings of Drupal Content, EPSCoR Reporting Categories,
and Jurisdictional.</p>
<p>Drupal Content is the type of content that Drupal comes with during a
standard installation such as article, page, blog, image, etc. Your jurisdiction
can add or remove items from this group.</p>
<p>EPSCoR Reporting Categories are the content types that come with the ERCore
module and represent the minimal reporting requirements to populate the
reporting tables.</p>
<p>The Jurisdictional group includes items that are optional or custom to that
jurisdiction. During installation your Drupal expert has the option to install
ERCore sub-modules. These sub-modules are optional and when installed will
appear in this group.</p>
<h3 id = "ercore-event">Calendar Events</h3>
<p>The Calendar Event and External Engagement content types are unique content
types, i.e., they have their respective forms and views but they are linked
to each other. The general process is to enter a calendar event and denote
whether or not the event will be attended or not by the public. If it is, then
the external engagement form will be made available after the event has passed
in time. To get to the external engagement form you visit the calendar event and
look for the external engagement link down near the bottom(specific steps
outlined below).</p>
<p>A Calendar Event(node) is the typical data that represents an event.
The External Engagement data(node) is linked to a specific Calendar Event when
the event will be attended by non - EPSCoR participants and includes the counts
by demographic breakout of the public that attended the event.</p>
<h4>To create a Calendar Event:</h4>
<ul>
<li>Find the "<em>ERCore Calendar Event</em>" link from the Create Content page.
</li>
<li>Title: Enter the title of the event</li>
<li>Date:  Enter the date of the event
	<ul>
	<li>Show End Date:  Click the Show End Date box if you want to designate
	this event with an ending period or time.
	<li>Click the Repeat box if this event recurs on a regular schedule</li></ul>
</li>
<li>EPSCoR Organizers:  Select the point of contact or organizer for this event.
This person must be an EPSCoR participant (registered in the system).</li>
<li>Event Type:  Select from the drop down list the type of event this will be.
</li>
<li>URL:  enter the link to the event if it is represented by another web site
</li>
<li>Will this event be attended by non-EPSCoR participants:  Select
the appropriate radio button. Selecting "Yes" will allow for External Engagement
data to be added to this event. <em>External Engagement data will be discussed
in detail later in this document</em></li>
<li>Abstract or Short Description:  write a short description or abstract of the
event.
<li>Attach Flier:  click the Browse button to attach a flier or additional file
for the event.</li>
<li>Address:  Enter the address of the event if there is one</li>
<li>Building(Room Number):  Enter the building and room number if there is one
</li>
<li>Save:  Click Save when you are done.</li></ul>
<h3 id = "ercore-collaboration">Collaborations</h3>
<p>There are three steps needed to accurately report on a collaboration. The
first step is to describe the collaboration.</p>
<ol><li>Describe the Collaboration: give the collaboration a title, attach the
relevant dates, and provide a description of the effort.</li>
<li>Select Internal Collaborators from the autocomplete field</li>
<li>Attach external collaborators with associated Institution and Department
data</li></ol>
<h4>Creating a Collaboration</h4>
<ul>
<li>Select <em>ERCore Collaboration</em> from the Add Content page.</li>
<li>Title: Some of the activities under the collaboration definition we
provided above may not have a clearly defined "<em>title</em>". Nevertheless,
we ask that you provide some kind of semi-descriptive title that will be
used in reference to the collaborative effort, e. g. "<em>Visualization and
Scientific Computation</em>", "<em>Survey of Statewide K-12 STEM Programs
</em>", "<em>Wentworth Core Genetic Facility</em>", and so on.</li>
<li>Components: are meant to describe a certain branch, component, team, or
department within your EPSCoR jurisdiction. This list is populated by the
administrator running your site, and will therefore be specific to your
EPSCoR jurisdiction(or "<em>Project</em>"). Select the components that this
collaborative activity falls under.</li>
<li>Dates: Please provide the dates during which the collaboration took place.
If the collaboration is still active, simply do not provide the "<em>end</em>"
date.</li>
<li>Description: Please provide a brief summary of the collaborative effort,
the general roles of the people involved, and any other relevant contextual
information. Address why you are engaged with the individuals at the other
institutions and how their expertise enhances or benefits your EPSCoR
efforts.</li>
<li>EPSCoR Collaorator(s) is a field that allows you to select people that are
within your EPSCoR system. These are internal collaborators.</li>
<li>External Collaborators is a compound field that will ask for three values
for each external collaborator. Multiple collaborators can be added by using the
"<em>Add another item</em> button that follow the field.
	<ol>
	<li>Name: Provide the full name of the individual. This should be the name of
	a person, and not a location, place, establishment, etc.</li>
	<li>Institution: Please select the institution that the person was working
	from during the collaboration. A person may belong to several institutions,
	and may collaborate from one of many. Select the institution that is
	appropriate for this collaboration. <em>If you are looking for an institution
	but not finding it on the list, select the "<em>New Content</em>" link
	following the Institution field.</em> This will allow you to add a new
	institution and then return you to your collaboration page to complete
	the form.</li>
	<li>Institution Department/Unit: We provide you with the option of including
	the Department that the person is collaborating from. Please note that the
	system counts two different departments from the same University to be two
	distinct "<em>institutions</em>" (as defined by NSF). This plays a part in
	how we count up the collaboration information in our reports to NSF.</li></ol>
</li></ul>

<h3 id="ercore-engagement">External Engagements</h3>
<p>If you selected the "<em>This event will be attended by non-EPSCoR
attendees</em>" radio button, this event is elligable to accept External
Engagement data. After the event date has passed, an "<em>Add External
Engagement</em>" link will be available on the bottom of the event page.</p>
<h4>There are two options to add external engagement attendee data</h4>
<ol>
<li>Upload a completed Excel sheet: Perhaps the easiest method to attach External
Engagement data to an event is to use the Upload a completed Excel Sheet method.
	<ul>
	<li>Select "<em>Upload Completed Excel Sheet</em>" and that area of the page
	will expand. Download the External Engagement Reporting Sheet and fill out
	the data at your event. Once the sheet is completed you may then upload the
	Excel sheet below, and the system will do the rest.</li>
	<li>After you have uploaded your completed excel sheet you may skip the
	"<em>Enter Attendee Figures Manually</em>" section.</li>
	</ul>
</li>
<li>Select "<em>Enter Attendee Figures Manually</em>" and that area of the page
	will expand.
	<ul>
	<li>Open the various sections and enter data for the appropriate
	categories</li>
	<li>Values are estimated:  Select this value to indicate that
	the counts being entered are estimated by the POC.</li></ul>
</li></ol>
<h3 id="ercore-proposal">Proposals and Grants</h3>
<ul>
<li>Choose the "<em>ERCore Grants and Proposals</em>" from the Add Content
page.  Scroll down and look for the "Current
and Pending Support" link. Once in the Create Current and Pending Support form:
	<ul>
	<li>Note 1:  Do not enter data to represent the EPSCoR grant, but all other
	grants are required regardless of funding agency or amounts</li>
	<li>Note 2:  NSF also requires that you enter data on grants that have been
	declined while you are an EPSCoR participant.</li></ul>
</li>
<li>Title:  Enter the official title of the grant</li>
<li>EPSCoR Participants listed on the Grant:  Enter the names of all the
EPSCoR participants listed on the grant.  This is a look-up field.  Start
typing in the first or last name of the participant and give the little
blue wheel a chance to search the database.  If the name does not appear in
the drop down choices, try again using the other name.  If it still does not
appear, that person is NOT has not registered with the EPSCoR web site and
needs to do so.  In the meanwhile, you can enter that participant\'s name in
the Non - EPSCoR Participants section directly below.</li>
<li>Non - EPSCoR Participants listed on the Grant:  List all the other
non-EPSCoR participants on the grant in this section. Please note that this
representation of the grant is for internal reporting purposes. We do not
need to know who is the PI on record, hence we don\'t ask for that
designation.</li>
<li>Salary Support:  If ANY EPSCoR members listed on the grant receive
salary support from this grant, check the appropriate radio button</li>
<li>Source of Support:  Enter the name of the funding agency</li>
<li>Please Categorize the nature of the Source of Support:  Select one of
the 3 choices
	<ol>
	<li>Other NSF:  key word "other".  Do not list this NSF EPSCoR grant.
	List all other NSF grants you may have.</li>
	<li>Other Gov:  List all other federally funded grants you may have</li>
	<li>Other:  List all other grants not federally funded (state, local,
	university, private, etc.)</li></ol>
</li>
<li>Amount Requested:  Enter the original amount requested.</li>
<li>Status:  Select the appropriate status of the grant.
	<ul>
	<li>Pending:  If you select Pending, please enter the Date of Pending
	Notification</li></ul>
</li>
<li>Date Submitted:  Enter the date you submitted the grant</li>
<li>Location:  Enter the primary location of where the research will be
conducted.</li>
<li>Brief Description of Proposed Work:  Enter the summary or the abstract
of the Proposed work to be done for that grant.</li>
<li>Save:  Click the Save button to save your work.  This form will not be
able to be partially completed.  All required fields are necessary to be
completed in order form to be saved.</li>
<li>If you are the only researcher listed on the grant, and you do not
receive salary support from this grant, you are done and do not need to
proceed to step 2.</li></ul>

<h3 id="other-cts">Highlights, Institutions, Other
Research Products, Patents, Presentations, Publications</h3>
<p>These content types share signficant functionality and the instructions have
been combined below.</p>
<ol>
<li>Select the appropriate content type from the "<em>Add Content</em>" page.
</li>
<li>Title: Enter the title</li>
<li>EPSCoR Participants:  use the auto look-up to attach EPSCoR Participants</li>
<li>Date:  Enter the year, month and date as appropriate</li>
<li>Description:  enter a short description of the data content at hand</li>
<li>Other, data category-specific fields:  the fields will vary for the
different data categories.  Fill them out as appropriate.  Some will be
required. Other fields will not be required but please remember that more
information is better and that the data will only be as good as the data
you enter.</li>
<li>Save:  Select save when data entry is complete.</li>
</ol>
<h2 id="viewing-data">Viewing and Downloading Reporting Data</h2>
<ul>
<li>After logging in, the default ERCore installation will show an ERCore
administrative menu. This guide is written assuming it is visible.  Each
jurisdiction will have the option to change the layout of the site and how menus
look and are placed.  This guide is written with the assumption that you are
working with a default installation.</li>
<li>One link on that ERCore menu should be to
<a href="/epscor/content">ErCore Content</a>. This page will display a list of
available ERCore content types.</li>
<li>Once you have selected the type of content you wish to view, you will be
directed to the appropriate page. This page will display a list of all content
of the appropriate type well as giving you filtering options.</li>
<li>If you wish to download the reporting data in Excel format, <em>and have
the appropriate permissions</em>, you will find a link on the bottom of the page
that reads "XLS". Selecting the "XLS" link will begin the download.</li>
</ul>
<h2 id="editing-data">Editing Reporting Data</h2>
<p>Make sure you are logged into the website and have the appropriate
permissions to edit data. Use the ERCore menu to find the appropriate content
to edit.</p>
<p>Once the content to edit has been located select  title to view the specific
page.  Then select the "<em>Edit</em>" tab. (<em>This is often underneath the
title.</em>) This will open the node edit form and allow you to make change.
When you are done with your changes, save them by selecting the save button at
the bottom of the page.</p>
<h2 id="terms">Common Drupal Terms</h2>
<dl>
<dt>Auto Complete</dt>
<dd>A field on a form that searches for data already in the database such as
a User\'s name.  If you were to start typing "dav" of David Kimball, matching
user names would be displayed in a list directly below the autocomplete field.
You may use your mouse or cursor to select one of the results.</dd>
<dd>Note: even though you can type in any string of text, unless there
is a match and you select it from the list, the form cannot be saved.
If you are searching for a name of someone who is a project member for example,
and the name does not appear, you may be misspelling the name, or that person
may not have an account.</dd>
<dt> Content</dt>
 <dd>Content refers to the information or data that Users input into Drupal
 through Forms.</dd>
 <dt> Content Type </dt>
 <dd>A content type is used to specify the different groups of content Drupal
 can collect. Examples of Content Types are ERCore Calendar Event,
 Collaboration, page, etc.</dd>
 <dt>Drupal</dt>
 <dd>Drupal is a free and open - source content management framework(CMF)
 written in PHP and distributed under the GNU General Public License.</dd>
 <dt>Module</dt>
 <dd>A module is a collection of files containing some functionality. They are
 written in PHP. They can be used to add functionality and access all
 variables and structures of Drupal core.</dd>
 <dt> Custom Module </dt>
 <dd>A custom module is a Drupal Module that has not been adopted by the Drupal
 Association for general release. Typically custom modules are written for
 unique needs. At this time the ERCore module is a custom module, but it is
 being developed to be promoted to an approved Drupal module.</dd>
 <dt>Field</dt>
<dd>A Field is an element of a Form where data is entered. Fields can include
such items as Dates, Titles, text boxes, etc.</dd>
<dt>Form</dt>
<dd>A form is the web interface that allows Users to input information or data.
Each Content Type will have a form associated with it. The term form is
generic.</dd>
<dt>Node</dt>
<dd>A Node refers to the group of information or data that comes into the
database through a form.  If you wanted to create an Event, the Event Node would
be all the information that the user can input through the Event form about
that specific event. Each time a new event is created it is assigned a
unique Node ID, which is used to differentiate Events or nodes. In the case of
events, the database can collect unlimited events, or event nodes, each one
being unique, and just as Events have nodes, so do each of the other Content
Types.</dd>
<dt> Roles (Drupal)</dt>
<dd>(Drupal) Roles are groups of Users with respect to the web site and Drupal,
<strong>not EPSCoR</strong>. A Drupal role is defined by the site administrator
and represents a set of privileges given to users assigned that role. Typical
ERCore roles are Adminsitrator, EPSCoR Administrator, Faculty, Student,
Committee Member and Public.  This approach allows new Users to be assigned
appropriate access to the site quickly and confidently.
<em>NSF defined(EPSCoR) roles are different and often confused</em>.</dd>
<dt>User Profile </dt>
<dd>The User Profile is the data or information that is associated with a User.
It is in the User Profile where the User\'s real name, user name, password,
photo, roles, involvement, contact information, demographics, etc., is kept.</dd>
<dt>User Permissions</dt>
<dd>User permissions are the set of access or restrictions to the various
functions of the site.  For each content type one can define who can see,
edit, delete or create new and whether or not you need to be logged in or not
to do so.  User pernissions are grouped by roles to allow the site administrator
to quickly assign or restrict access to common types of users.</dd>
<dt>View</dt>
<dt>Widget</dt>
<dd>A widget is a generic term that describes items on a form that does a
specific function.  A common widget is the calendar widget.  The calendar widget
has	the fields for day, month and year, where you can enter that data manually
or you can click a day on a mini-calendar.</dd>
</dl>
<h2 id="definitions">Key Term NSF Definitions and the Criteria in the System
that Defines these Terms</h2>
<p>The following are a few key terms used in EPSCoR reporting, which may or may
not be defined by NSF, yet must be and have been defined by the ERCore
collaborative group in order for the Drupal ER-Core to properly handle this data.
EPSCoR administrators must understand the ERCore criterion in order to have
confidence in the data and manage it properly.</p>
<dd>
<dt>Participant (NSF)</dt>
<dd>Participants are members of the project who contribute in an ongoing and
regular basis. They can be paid or unpaid and are involved in activities funded
by the project.</dd>
<dd>Note: in the absence of a formal NSF definition of a Participant
of EPSCoR, the ERCore Drupal Committee defines a Participant as:
	<ul><li>Needs to be housed at one of the partnering institutions as defined by
	the RII, and,</li>
	<li>Contribute equal to or greater than 160 hours (one person month) in a year
	(reporting period).</li>
	</ul>
</dd>
<dt>Participant (ERCore)</dt>
<dd>Once the user\'s account meets the following criteria, the system adds 1 to
the appropriate category in Table A - Participants. The criteria is:
	<ul>
  <li>User must be marked as Active </li>
  <li>User must have the "Authenticated EPSCoR" user role </li>
  <li>User must belong to a Participating Institution </li>
  <li>User must contribute at least 160 hours per year(1 person - month of
  effort)</li>
  </ul>
</dd>
<dt>Participating Institution (NSF) </dt>
<dd>Participating institutions are those institutions that receive direct
support from the RII award including sub - awards.</dd>
<dt>Participating Institution (ERCore)</dt>
<dd>Institution node must be marked as participating(checkbox, an
administrative function).  For each institution that has its "
<em>participating</em>" field checked, the system is then able to properly
place participants in Table A, by institution.</dd>
<dt>Collaboration (NSF)</dt>
<dd>NSF does not formally define what a collaboration is for EPSCoR.</dd>
<dd>Note: in the absence of a formal NSF definition of a collaboration
for EPSCoR, the ERCore Drupal Committee defines a collaboration as a set of
activities between a participating institution(s) and non - participating
institutions, organizations or agencies that lead to a definable outcome. In a
collaboration, each party contributes intellectually and brings complementary
capabilities and resources. Examples can include activities such as research
projects, outreach events, database development or web dissemination of
research data and results.</dd>
<dt>Collaboration (ERCore)</dt>
<dd>A collaboration is the composition of two different elements. Each of these
elements have criteria that must be met. Once all the required elements meet the
criteria, a collaboration is established and a count of 1 is added to Table C -
Collaborations, regardless of how many EPSCoR researchers participate in the
collaboration. The following is a list of the required elements for a
collaboration:
	<ol>
	<li>Non-participating Institution (see above criteria to be counted as
	participating)</li>
  <li>Text fields that describe:
  	<ul>
  	<li>Title</li>
    <li>Description of work and contribution to the RII </li>
    <li>Start Date </li>
    <li>Name of at least one EPSCoR participant </li>
    <li>Name of at least one EPSCoR research component or project </li>
    <li>Names of collaborators (see definition of collaborator below)</li>
    <li>Department for each named collaborator </li></ul>
  </li></ol>
</li></dd>
<dt>Collaborator (Drupal Committee)</dt>
<dd>NSF does not formally define who a collaborator is for EPSCoR.</dd>
<dd>Note: in the absence of a formal NSF definition of who a collaborator is for
EPSCoR, the ERCore Drupal Committee defines a collaborator as a researcher,
faculty level or equivalent, who significantly contributes (intellectually,
labor) to the project less than 160 hrs/yr. A collaborator may or may not be
housed in a participating institution.</dd>
<dt> Collaborator (ERCore)</dt>
<dd>A collaborator contributes less than 160 hrs of effort during the (reporting
period) year. This value is set in the user profile within the Involvement tab.
A collaborator may or may not be housed at a participating institution.</dd>
<dd>Collaborator names are simply text fields and part of the Collaboration
Content Type, not formal roles assigned within a default installation of the
ERCore.  For each name that is listed as a collaborator in a completed
collaboration, the system counts 1 and adds that to Table C - Collaborations.</dd>
<dd>The default ERCore role options do not include a Collaborator Role. This is
left up to the jurisdiction. We suggest using the Guest Role to allow
collaborators access to the system.</dd>
<dt> New Investigator (NSF)</dt>
<dd>New investigators are those at the faculty, junior faculty, and post doc
level who are new to the RII project during the reporting period.</dd>
<dt> New Investigator (ERCore)</dt>
<dd>New Investigators are Participants assigned with Post Doc or Faculty roles
who\'s start date is less then 365 days from the most recent reporting period.
For each user who\'s profile meets the below criteria, the system counts 1
and adds it to Table B - Participants.</dd>
<>In order for the system to count a user as a new investigator, the
following criteria must be met:
	<ol>
  <li>Be an active system - defined participant </li>
  <li>Have the faculty or Post Doc role assigned </li>
  <li>Have the difference between the most recent reporting period and the
  user\'s start date be less than 365 days</li>
  </ol>
</dd>
<dt>Project Start Date (ER-Core)</dt>
<dd>The start date is set by administration after the installation of the
ERCore in the <a href="/admin/config/ercore/admin">ERCore Reporting Module
Settings</a> page. This is also listed on the Drupal Configuration page.  It is
arbitrarily set and can be changed at any point.</dd>
<dt>Reporting Period (ER-Core)</dt>
<dd>The Reporting Period uses the Year of the Start Date, plus a month
(arbitrarily set by site administration), and the first day of that month. The
Reporting Period starting month is set in the
<a href="/admin/config/ercore/admin">ERCore Reporting Module
Settings</a> page. The Reporting Period starting day is 1 and cannot be changed.
</dd></dl>'),
  );
}
