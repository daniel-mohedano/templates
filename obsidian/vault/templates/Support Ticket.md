<%*
let fileName = await tp.system.prompt("Support Ticket Title")
if (fileName != ""){
	titleName = "ST - " + fileName
} else {
	titleName = tp.file.title
}

await tp.file.rename(titleName)
await tp.file.move("notes/" + titleName);

let org_name = await tp.system.prompt("Org Name")
let org_id = ""
let ticket_id = ""
let github_issue = ""
if (org_name != "") {
    org_id = await tp.system.prompt("Org Id")
    ticket_id = await tp.system.prompt("Zendesk Ticket Id")
} else {
    github_issue = await tp.system.prompt("Github Issue")
}
-%>
---
date: <% tp.file.creation_date("YYYY-MM-DD") %>
type: support_ticket
org_id: <% org_id %>
org_name: <% org_name %>
ticket_id: <% ticket_id %>
github_issue: <% github_issue %>
template:
  - "[[Support Ticket]]"
---
# Issue

> [!info] Customer Report
> <% tp.file.cursor() %>

# Investigation

> [!success] Solution
>  
# Further Work