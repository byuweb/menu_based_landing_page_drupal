Installation Instructions
-------------------------------
Git clone or download this module.

Download the [module]

To Use
------------------------
Enable the two modules.

To change your menu from using top level links (that aren't content
but that open up to more links), you will need to make a few slight changes:

Create a simple page (a node) for each of the top level links.
Add them to the menu in the place of those pre-existing non-link menu links. You can delete those old links.

Go to views. You will find a new view that has been created - Menu Based Landing Pages.
You may edit this if you would like.

Go to structure > blocks. You will see a Menu Based Landing Page block. Display it in your content region.
You don't need to limit it to certain pages neccessarily, as it will only display on pages that have menu children in the main menu.

If you need landing pages for other menus other than the main menu, you can edit or clone this view.

More than 2 levels
----------------------------------
This module will display on any content page that has menu children, or links below it in the menu.
This means that even lower level pages can have these tiles displayed for their children links.

For instance, this menu tree:
Breakfast
   Eggs
   Cereal
Lunch
   Entrees
       Lasagna
       Pizza
   Appetizers
        Soups

The tiles will display showing links on the pages Breakfast, Lunch, Entrees, and Appetizers.


Links that AREN'T to actual content
--------------------------------------
This view only works for content links.

Here are some work around ideas:
1. node page / content - works great
2. External link to a page not in your site - you would need to create a node/content page for it, and then have that page redirect.
 (We plan to make a module that creates an External Page content type with a redirect url - hopefully coming soon!)
3. Views page    - embed your view page onto content: https://www.drupal.org/project/insert_view
            OR recreate it as a block and display on that node page.