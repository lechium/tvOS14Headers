//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDSharePointBrowserDelegate-Protocol.h"

@class CUCoalescer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SDClassroomBrowser, SDConnectedBrowser, SDDomainBrowser, SDManagedBrowser, SDRapportBrowser, SDSharePointBrowser, SDStatusMonitor, SDWorkgroupBrowser, SDXPCHelperConnection;
@protocol OS_dispatch_queue, OS_xpc_object, SDNodeBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDNodeBrowser : NSObject <SDSharePointBrowserDelegate>
{
    NSString *_kind;	// 8 = 0x8
    struct __SFNode *_parent;	// 16 = 0x10
    NSArray *_protocols;	// 24 = 0x18
    NSString *_protocol;	// 32 = 0x20
    long long _mode;	// 40 = 0x28
    int _error;	// 48 = 0x30
    _Bool _combineWorkgroups;	// 52 = 0x34
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CUCoalescer *_coalescer;	// 64 = 0x40
    SDStatusMonitor *_monitor;	// 72 = 0x48
    NSMutableSet *_odiskDomains;	// 80 = 0x50
    NSMutableSet *_airDropDomains;	// 88 = 0x58
    NSMutableSet *_bonjourDomains;	// 96 = 0x60
    NSMutableSet *_windowsWorkgroups;	// 104 = 0x68
    SDDomainBrowser *_domainBrowser;	// 112 = 0x70
    SDManagedBrowser *_managedBrowser;	// 120 = 0x78
    SDClassroomBrowser *_classroomBrowser;	// 128 = 0x80
    SDConnectedBrowser *_connectedBrowser;	// 136 = 0x88
    SDWorkgroupBrowser *_workgroupBrowser;	// 144 = 0x90
    SDSharePointBrowser *_sharePointBrowser;	// 152 = 0x98
    SDRapportBrowser *_rapportBrowser;	// 160 = 0xa0
    NSDictionary *_options;	// 168 = 0xa8
    NSMutableDictionary *_managedURLTable;	// 176 = 0xb0
    NSMutableDictionary *_commentHashTable;	// 184 = 0xb8
    NSMutableDictionary *_originalNodes;	// 192 = 0xc0
    NSString *_bundleID;	// 200 = 0xc8
    SDXPCHelperConnection *_helperConnection;	// 208 = 0xd0
    id <SDNodeBrowserDelegate> _delegate;	// 216 = 0xd8
    NSObject<OS_xpc_object> *_connection;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000010014633c
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property __weak id <SDNodeBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)rangingMeasurementFromNode:(struct __SFNode *)arg1;	// IMP=0x0000000100146248
- (id)mostRelevantMeasurementFromA:(id)arg1 andMeasurementB:(id)arg2;	// IMP=0x00000001001460bc
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x0000000100146038
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x000000010014601c
@property(readonly, copy) NSArray *sidebarNodes;
@property(readonly, copy) NSArray *nodes;
- (id)nodesInternal:(_Bool)arg1;	// IMP=0x0000000100145d70
- (void)appendAllNode:(id)arg1;	// IMP=0x0000000100145cd8
- (void)stop;	// IMP=0x0000000100145bbc
- (void)start;	// IMP=0x000000010014599c
- (void)unloadRapport;	// IMP=0x000000010014590c
- (void)unloadSidebarPrefsMonitor;	// IMP=0x0000000100145880
- (void)unloadAirDrop;	// IMP=0x00000001001456c4
- (void)unloadODisk;	// IMP=0x0000000100145508
- (void)unloadClassroom;	// IMP=0x0000000100145478
- (void)unloadManaged;	// IMP=0x00000001001453e8
- (void)unloadConnected;	// IMP=0x0000000100145358
- (void)unloadSharePoints;	// IMP=0x0000000100145300
- (void)unloadWorkgroups;	// IMP=0x0000000100145270
- (void)unloadDomains;	// IMP=0x00000001001451e0
- (void)unloadWindows;	// IMP=0x0000000100145024
- (void)unloadBonjour;	// IMP=0x0000000100144e68
- (id)airDropNodes;	// IMP=0x0000000100144d90
- (id)odiskNodes;	// IMP=0x0000000100144d14
- (id)sharePointNodes;	// IMP=0x0000000100144cb0
- (id)neighborhoodNodes;	// IMP=0x0000000100144c08
- (id)sidebarNodesFromServerNodes:(id)arg1 nonServerCount:(unsigned long long)arg2 addAllNode:(_Bool *)arg3;	// IMP=0x00000001001447c0
- (void)updateSelectionReasonInNodes:(id)arg1;	// IMP=0x00000001001447bc
- (void)addFakeRangingMeasurementIfAppropriateToNodesInCache:(id)arg1;	// IMP=0x00000001001447b8
- (void)addRapportChildrenFromCache:(id)arg1;	// IMP=0x000000010014462c
- (void)addConnectedChildrenFromCache:(id)arg1;	// IMP=0x00000001001441c0
- (void)addManagedChildrenFromCache:(id)arg1;	// IMP=0x0000000100143f00
- (void)addClassroomChildrenFromCache:(id)arg1;	// IMP=0x0000000100143d70
- (void)addWindowsChildrenFromCache:(id)arg1;	// IMP=0x00000001001438b0
- (void)addBonjourChildrenFromCache:(id)arg1;	// IMP=0x0000000100143420
- (void)copyOverBonjourInfo:(struct __SFNode *)arg1 source:(struct __SFNode *)arg2;	// IMP=0x00000001001432a0
- (id)workgroupChildren;	// IMP=0x0000000100143234
- (id)domainChildren;	// IMP=0x000000010014321c
- (void)loadRapport;	// IMP=0x0000000100143098
- (void)loadSidebarPrefsMonitor;	// IMP=0x0000000100143004
- (void)loadAirDrop;	// IMP=0x0000000100142c58
- (void)loadClassroom;	// IMP=0x0000000100142a9c
- (void)loadODisk;	// IMP=0x00000001001427b4
- (void)loadManaged;	// IMP=0x00000001001426a0
- (void)loadConnected;	// IMP=0x0000000100142508
- (void)loadSharePoints;	// IMP=0x0000000100142504
- (_Bool)onlySupportsADisk:(id)arg1;	// IMP=0x0000000100142468
- (void)loadWorkgroups;	// IMP=0x0000000100142334
- (void)loadDomains;	// IMP=0x000000010014221c
- (void)loadWindows;	// IMP=0x0000000100141f54
- (void)loadBonjour;	// IMP=0x0000000100141c04
@property(copy) NSDictionary *options;
@property long long mode;
- (void)sidebarPrefsChanged:(id)arg1;	// IMP=0x0000000100141b20
- (void)managedChanged:(id)arg1;	// IMP=0x0000000100141ae8
- (void)connectedChanged:(id)arg1;	// IMP=0x0000000100141ab0
- (void)sharePointBrowser:(id)arg1 nodesDidChangeWithError:(int)arg2;	// IMP=0x0000000100141a0c
- (void)workgroupsChanged:(id)arg1;	// IMP=0x00000001001419d4
- (void)domainsChanged:(id)arg1;	// IMP=0x000000010014199c
- (void)serversChanged:(id)arg1;	// IMP=0x00000001001418d8
- (void)classroomChanged:(id)arg1;	// IMP=0x00000001001418cc
- (void)takeActionOnServerChanged:(id)arg1 neighborhood:(id)arg2;	// IMP=0x0000000100141790
- (void)notifyClientAboutWorkgroups;	// IMP=0x00000001001413ec
- (void)setConnectionState:(int)arg1;	// IMP=0x00000001001413e0
- (void)setUserName:(id)arg1;	// IMP=0x00000001001413d4
- (void)setError:(int)arg1;	// IMP=0x00000001001413cc
- (void)notifyClient;	// IMP=0x00000001001413bc
- (id)coalescedNodesForNodesCache:(id)arg1;	// IMP=0x000000010014070c
- (void)dealloc;	// IMP=0x00000001001406b4
- (id)initWithNode:(struct __SFNode *)arg1 protocol:(id)arg2 flags:(unsigned long long)arg3 kind:(id)arg4;	// IMP=0x00000001001404ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

