#include "testApp.h"
#include "ofxKyotoCabinet.h"

using namespace kyotocabinet;

//--------------------------------------------------------------
void testApp::setup(){
	// create the database object
	CacheDB db;
	
	// open the database
	if (!db.open("%", CacheDB::OWRITER | CacheDB::OCREATE)) {
		cerr << "open error: " << db.error().name() << endl;
	}
	
	// store records
	if (!db.set("foo", "hop") ||
		!db.set("bar", "step") ||
		!db.set("baz", "jump")) {
		cerr << "set error: " << db.error().name() << endl;
	}
	
	// retrieve a record
	string value;
	if (db.get("foo", &value)) {
		cout << value << endl;
	} else {
		cerr << "get error: " << db.error().name() << endl;
	}
	
	// traverse records
	DB::Cursor* cur = db.cursor();
	cur->jump();
	string ckey, cvalue;
	while (cur->get(&ckey, &cvalue, true)) {
		cout << ckey << ":" << cvalue << endl;
		cout << ".";
	}
	delete cur;
	
	// close the database
	if (!db.close()) {
		cerr << "close error: " << db.error().name() << endl;
	}
}

//--------------------------------------------------------------
void testApp::update(){
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
	
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
	
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
	
}