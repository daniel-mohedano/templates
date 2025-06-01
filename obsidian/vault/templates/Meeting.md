---
date: <% tp.file.creation_date("YYYY-MM-DD") %>
type: meeting
shared_notes: 
project: 
template:
  - "[[Meeting]]"
people: 
topics: 
tags: 
---
<%*
let qcFileName = await tp.system.prompt("Meeting Title")
if (qcFileName != ""){
	titleName = tp.file.creation_date("YYYY-MM-DD ddd") + "  -  " + qcFileName
}
else {
	titleName = tp.file.title
}

await tp.file.rename(titleName)
await tp.file.move("meetings/" + titleName);
-%>
# Notes
<% tp.file.cursor() %>

## Action Items