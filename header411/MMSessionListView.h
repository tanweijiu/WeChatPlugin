//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "IContactMgrExt.h"
#import "IMMSessionMgrExt.h"
#import "MMSessionChoosenViewDelegate.h"
#import "MMTableViewDelegate.h"
#import "NSSearchFieldDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MMSearchField, MMSessionPickerLogic, MMTableView, MMTextField, NSString;

@interface MMSessionListView : MMViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, NSSearchFieldDelegate, IMMSessionMgrExt, IContactMgrExt, MMSessionChoosenViewDelegate>
{
    MMSessionPickerLogic *m_logic;
    BOOL _isShown;
    id <MMSessionListViewDelegate> _delegate;
    MMTableView *_tableView;
    MMSearchField *_searchField;
    MMTextField *_noSearchResultHint;
}

@property(retain, nonatomic) MMTextField *noSearchResultHint; // @synthesize noSearchResultHint=_noSearchResultHint;
@property(nonatomic) BOOL isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) MMSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMSessionListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDeleteContacts:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onSessionReordered;
- (void)onSessionUpdated:(id)arg1;
- (void)removePseudoSelectionBgColor;
- (void)drawPseudoSelectionBgColor;
- (void)focusOnSearchfield;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)rowToggled:(id)arg1;
- (void)_toggleChosennessOfRow:(long long)arg1;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_resetLogicAllContactsForSearch;
- (void)_resetLogicGroupContactsForSearch;
- (void)_resetLogicContactsForSearch;
- (void)_resetLogicDetermineDisplayedRows;
- (void)reloadSessionListData;
- (void)removeAssignedContact;
- (void)removePreSelectedContact;
- (void)removeSearchQuery;
- (void)removeChoosenContact:(id)arg1;
- (void)setShowsOtherNonhumanChats:(BOOL)arg1;
- (void)setShowsOfficialAccounts:(BOOL)arg1;
- (void)setShowsGroupChats:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setFilteredUserNames:(id)arg1;
- (void)setAssignedContact:(id)arg1;
- (void)setPreSelectedContact:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setupSearchControls;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

