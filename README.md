# Menu Landing Page Views

## What This Module Does
This module helps you generate landing pages based on your existing menu and page structure. 
This is especially helpful for websites trying to convert form dropdown menus to a flat menu 
linking to landing pages of it's other pages. This module can help you make that transition in a 
matter of minutes, rather than recreating your content neccessarily. Of course, it can also be used by new websites 
that are setting up the same type of landing pages.

Note: While this module helps you convert to the new menu system, we still recommend that you periodically update your content and make sure it is up to date and well organized.

It uses the main menu by default (but this can be changed in the view) and generates a View block which
detects if the current page is in the main menu and if it has child pages. If it does, it puts those child pages into cards and displays them in byu-card format. (See this module for more information: https://github.com/byuweb/views_card_d7)

## Installation Instructions
Git clone or download this module.

Download the [module]

Download all dependencies. (Drupal tells you which modules, or see the section below.)

## To Use
### 1. Get Dependencies & Enable
There are several dependencies for this module:
https://drupal.org/project/views_menu_children_filter
https://www.drupal.org/project/menu_node
https://www.drupal.org/project/menu_node_views

Enable these modules and Menu Based Landing Views D7.

### 2. Adjust your current menu slightly
To change your menu from using top level links (that aren't content
but that open up to more links), you will need to make a few slight changes:

Create a simple page (a node) for each of the top level links.
Add them to the menu in the place of those pre-existing non-link menu links. You can delete those old links.

### 3. Check the generated View
Go to views. You will find a new view that has been created - Menu Based Landing Pages.
You may edit this if you would like.

### 4. Place the block in your region.
Go to structure > blocks. You will see a Menu Based Landing Page block. Display it in your content region.
You don't need to limit it to certain pages neccessarily, as it will only display on pages that have menu children in the main menu.

If you need landing pages for other menus other than the main menu, you can edit or clone this view.

## More than 2 levels
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

## Modifying the content in the Card tiles
This module provides a default view. You are able to modify everything about the view. For example, you can modify the sort to be alphabetical by title, you could add more fields to show in the card (i.e. an image or tag). You can also change style settings related to the BYU Card.
## Creating more views like this?
You are able to clone the view and modify it if you want something similar for another menu. Or if you wanted to create a page instead of a block, you would be able to as well.
## Links that AREN'T to actual content
This view only works for content links.

Here are some work around ideas:
1. node page / content - works great
2. External link to a page not in your site - you would need to create a node/content page for it, and then have that page redirect.
 (We plan to make a module that creates an External Page content type with a redirect url - hopefully coming soon!)
3. Views page    - embed your view page onto content: https://www.drupal.org/project/insert_view
            OR recreate it as a block and display on that node page.
