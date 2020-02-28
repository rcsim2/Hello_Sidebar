//
//  ViewController.h
//  Hello_Sidebar
//
//  Created by Rik Goossens on 28/02/2020.
//  Copyright © 2020 Rik Goossens. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController <NSApplicationDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource, NSMenuDelegate> {
@private
    NSWindow *_window;
    IBOutlet NSView *_mainContentView;
    NSArray *_topLevelItems;
    NSViewController *_currentContentViewController;
    NSMutableDictionary *_childrenDictionary;
    IBOutlet NSOutlineView *_sidebarOutlineView;
    
}

@property (assign) IBOutlet NSWindow *window;

- (IBAction)sidebarMenuDidChange:(id)sender;


//@property (weak) IBOutlet NSOutlineView *mySidebar;

// NOTE: In the SidebarDemo sample select the Outline View in Storyboard, Show Connections Inspector,
// Referencing Outlets should be: _sidebarOutlineView -> Delegate
// Instead we have: _sidebarOutlineView -> View Controller
// So we need a Delegate. Of we get rid of that connection in the sample things also do net get drawn.
// YYyyyesss!!! In The Connections Inspectors we have to connect dataSource, delegate and
// Referencing Outlet with the View Controller (last one gives menu and then connect with _sidebarOutlineView)
// If we do that we can at least select blue bars in the Outline View and see the Hide/Show items for the parents
// If we connect delegate with View instead we get the triangles
// No item text however. Why???
// Because we have to set the Main Cell class  to Custom Class: SidebarTableCellView
// Also have to set Identifier and Label to MainCell
// We got no headers because they were in a Cell whereas they were on their own in the sample.
// Also had to give them the correct Identifier: HeaderTextField and Label: Header Label
// For button we had to do Referencing Outlets: button -> Main Cell
// Now all OKOK.
// Main prob was making the right Connections in Storyboard and using the correct labels
// and IDs. So .nib => Storyboard hassle.



// We use the private interface var
//@property (weak) IBOutlet NSOutlineView *sidebarOutlineView;

@end

